#include "Rectangle.h"
#include "Frame.h"

extern Frame frame; 
void Rectangle::setColor(unsigned char red, unsigned char green, unsigned char blue) {
	this->red = red;
	this->green = green;
	this->blue = blue; 
}

void Rectangle::setSize(int h, int w) {
	this->h = h;
	this->w = w;
}

void Rectangle::draw_rect() {
	if (frame.outside_frame(&x, &y)) return;
	frame.clear_frame();
	int x0 = x;
	int x1 = x + w;
	int y0 = y;
	int y1 = y + h;
	frame.clamp(&x0, &y0);
	frame.clamp(&x1, &y1);
	for (int y = y0; y < y1; ++y) {
		for (int x = x0; x < x1; ++x) {
			this->r[x][y][0] = red;
			this->r[x][y][1] = green;
			this->r[x][y][2] = blue; 
		}
	}
	frame.setPixel(x, y, w, h, r);
}
