#include "SierpinskiTile.h"

SierpinskiTile::~SierpinskiTile() //Deleting all resources in destructor
{
	for (auto itr : rects)
		delete itr;
}

void SierpinskiTile::setTile(int x_index, int y_index) //Setting tile on the tile index position
{
	SDL_Rect* rectToAdd = new SDL_Rect;
	rectToAdd->x = x_index * tileW;
	rectToAdd->y = y_index * tileH;
	rectToAdd->w = tileW;
	rectToAdd->h = tileH;

	rects.push_back(rectToAdd);
}

bool SierpinskiTile::isThereTile(int x_index, int y_index) //Finding out whether a tile is here or not
{
	for (auto itr : rects)
		if (itr->x == tileW * x_index
			&& itr->y == tileH * y_index)
			return true;

	return false;
}

void SierpinskiTile::calculate(int y_index) //Calculating where to put tiles in the next row
//by the tile arrangement present in the previous row
{
	/////////////////////////////////////////////////
	//Conditions for putting a tile below the upper tile (or tile space):
	// 1- Tile is at that spot, 0- Tile is not at that spot, X- Unknown (can be 0 or 1)

	/////////////////////////////////////////////////
	// Case 1: 0 1 0, Case 2: 1 0 0, Case 3: 0 0 1,
	// Case 4: 1 1 0, Case 5: 1 0 1, Case 6: 0 1 1

	// Output for Cases 1-6: X 1 X

	/////////////////////////////////////////////////
	// Case 7: 0 0 0, Case 8: 1 1 1

	// Output for Cases 7-8: X 0 X

	int y = 0;
	if (y_index > -1)
	{
		y = y_index;

		for (int x = 0; x < scrW / tileW; x++)
		{
			if ((isThereTile(x, y) || isThereTile(x + 1, y) || isThereTile(x - 1, y))
				&& !(isThereTile(x, y) && isThereTile(x + 1, y) && isThereTile(x - 1, y))
				)
				setTile(x, y + 1);
		}
	}
	else
	{
		for (; y < scrH / tileH; y++)
			for (int x = 0; x < scrW / tileW; x++)
			{
				if ((isThereTile(x, y) || isThereTile(x + 1, y) || isThereTile(x - 1, y))
					&& !(isThereTile(x, y) && isThereTile(x + 1, y) && isThereTile(x - 1, y))
					)
					setTile(x, y + 1);
			}
	}
}

void SierpinskiTile::draw(SDL_Renderer*& renderer, int r, int g, int b, int y_index)
{
	SDL_SetRenderDrawColor(renderer, r, g, b, 255); //Setting renderer's color

	std::list<SDL_Rect*> deleteRects; //For getting a list of rectangles/tiles to be deleted
	for (auto itr : rects)
	{
		SDL_RenderFillRect(renderer, itr); //Draw all tiles present in the rects which
		//will be just all tiles in the particular row

		if (itr->y <= tileH * y_index) //Put all tiles of rows before the given row
			//to deleteRects for deleting
			deleteRects.push_back(itr);
	}

	for (auto itr : deleteRects) //Delete all collected tiles and clear them
	{
		rects.remove(itr);
		delete itr;
	}
	deleteRects.clear();

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //Resetting renderer's color
}