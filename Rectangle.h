#pragma once
#include <vector>
#include "Global.h"
class Rectangle {
public:
	Rectangle(int h, int w); 
	void draw_rect(int x, int y, int w, int h, byte r, byte g, byte b);
	//void draw_frame(double t, Rectangle *rec); 
	void draw_frame(double t); 
	void setColor(byte r, byte g, byte b); 
	void startingPt(int x, int y); 
	void Recc(Rectangle *r); 
	int x;
	int y;
private:
	byte r; 
	byte g; 
	byte b; 
	int h;
	int w; 
	byte *ptr; 
	std::vector<Rectangle *> rectangles;
};