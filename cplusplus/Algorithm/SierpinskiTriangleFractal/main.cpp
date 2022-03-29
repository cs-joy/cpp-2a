
#include "SierpinskiTile.h"

#undef main //Solution to the problem: No entry point defined.

const int SCR_W = 640;
const int SCR_H = 480;
const int TILE_W = 5; //Each tile's width
const int TILE_H = 5; //Each tile's height

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
SDL_Event event;

bool quit = false;

SierpinskiTile* generator = NULL;

int main(int argc, char** args)
{
	SDL_Init(SDL_INIT_VIDEO); //Initializing SDL2

	window = SDL_CreateWindow("Koch Fractal", SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, SCR_W, SCR_H, SDL_WINDOW_SHOWN); //Creating window
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); //Creating renderer

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //Setting default screen color

	generator = new SierpinskiTile(SCR_W, SCR_H, TILE_W, TILE_H); //Creating fractal generator
	generator->setTile((SCR_W / TILE_W) / 2, 0); //Setting a tile at the top middle of the screen

	int row = 0;
	while (!quit)
	{
		while (SDL_PollEvent(&event) > 0) //Minimal event polling for proper quitting
			if (event.type == SDL_QUIT)
				quit = true;

		//***NOTE: Screen must not be cleaned as the draw() method draws a row only
		//and deletes all tiles of the previous rows***
		//SDL_RenderClear(renderer);

		if (row < SCR_H / TILE_H) //Draw and calculate until the last row
		{
			generator->draw(renderer, 0, 255, 0, row-1); //Drawing the row in green color

			SDL_RenderPresent(renderer); //Updating screen

			generator->calculate(row++); //Calculating the next row
		}
	}

	delete generator; //Deallocating fractal generator

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit(); //Clearing all SDL resources

	return 0;
}