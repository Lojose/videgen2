#include <iostream>
#include "Rectangle.h"
#include "Frame.h"
#include "Global.h"

extern Frame frame; 

Rectangle::Rectangle(int h, int w): x(x), y(y), h(h), w(w), r(0), g(0), b(255) {
}

void Rectangle::setColor(byte r, byte g, byte b) {
	this->r = r; 
	this->g = g; 
	this->b = b; 
}

void Rectangle::startingPt(int x, int y) {
	this->x = x; 
	this->y = y; 
 }
void Rectangle::draw_rect(int x, int y, int w, int h, byte r, byte g, byte b) {
	//frame.clear(); 
	if (frame.isOutside(&x, &y)) return;
	int x0 = x;
	int x1 = x + w;
	int y0 = y;
	int y1 = y + h;
	frame.clamp(&x0, &y0);
	frame.clamp(&x1, &y1);
	for (int y = y0; y < y1; ++y) {
		for (int x = x0; x < x1; ++x) {
			frame.setPixel(x, y, r, g, b);
		}
	}
}

void Rectangle::Recc(Rectangle *r) {
	rectangles.push_back(r);
}
void Rectangle::draw_frame(double t) {
	//frame.clear();
	const double pps = 80; // pixels per second 
	double size = rectangles.size();
	rectangles[1]->draw_rect(x + t*pps, y + t*pps, w, h, r, g, b);
	rectangles[2]->draw_rect(x + t*pps, y + t*pps, w, h, r, g, b);
/*	if (t > 34) {
		rectangles[2]->draw_rect(x + t*pps, y + t*pps, w, h, r, g, b);
	}*/
}