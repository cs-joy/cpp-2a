#include <SDL.h>
#include <list>


#ifndef _SIERPINSKI_TILE_
#define _SIERPINSKI_TILE_

class SierpinskiTile
{
public:
	SierpinskiTile(int scrW, int scrH, int w, int h)
		: scrW(scrW), scrH(scrH), tileW(w), tileH(h) {};
	~SierpinskiTile();
	void setTile(int x_index, int y_index);
	bool isThereTile(int x_index, int y_index);
	void calculate(int y_index = -1);
	void draw(SDL_Renderer*& renderer, int r, int g, int b, int y_index);

private:
	int scrW, scrH;
	int tileW, tileH;
	std::list<SDL_Rect*> rects;
};

#endif 