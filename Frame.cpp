#include "Frame.h"
#include <cstring>
#define J 720
#define P 480

void Frame::setPixel(int x, int y, int w, int h, unsigned char container[J][P][3]) {
	this->x = x;
	this->y = y;
	this->h = h;
	this->w = w;
	for (int i = 0; i < 3; i++){
		for (int k = 0; k < J; k++){
			for (int w = 0; w < P; w++) {
				this->container[k][w][i] = this->container[k][w][i];
			}
		}
	}
}

void Frame::clear_frame() {
	memset(buffer, 0,  sizeof(buffer));
}

void Frame::draw_frame(int t) {
	const int pps = 50; // pixels per second
	int x = t*pps;
	int x0 = x; 
	int x1 = x + w;
	int y = t*pps;
	int y0 = y;
	int y1 = y + h;
	for (int y = y0; y < y1; ++y) {
		for (int x = x0; x < x1; ++x) {
			buffer[y][x][0] = container[y][x][0];
			buffer[y][x][1] = container[y][x][1];
			buffer[y][x][2] = container[y][x][2]; 
		}
	}
}

bool Frame::outside_frame(int *x, int *y) {
	return *x < 0 || *x >= J || *y < 0 || *y >= P;
}

void Frame::clamp(int * x, int * y) {
	if (*x < 0) *x = 0; else if (*x >= J) *x = J - 1;
	if (*y < 0) *y = 0; else if (*y >= P) *y = P - 1;
}
