#pragma once
#include "Global.h" 
#include <stdio.h>
#include <cstring>
#include "Rectangle.h"

class Frame {
public:
	Frame();
	~Frame();
	void setPixel(int x, int y, byte r, byte g, byte blue);
	void clear();
	bool isOutside(int * x, int * y) const;
	void write(FILE * file) const;
	void clamp(int * x, int * y); 

private:
	byte *pixels;
	byte *p; 
	std::vector<unsigned char *> pcontainer;
};