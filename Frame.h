#pragma once
#define J 720
#define P 480

class Frame {
public:
	//Frame() : t(0), x(0), y(0), w(0), h(0), buffer[720][480][3]{}
	void setPixel(int x, int y, int w, int h, unsigned char container[J][P][3]);
	bool outside_frame(int *x, int *y);
	void clamp(int *x, int *y);
	void clear_frame(); 
	void draw_frame(int t); 
	unsigned char container[J][P][3];
	unsigned char buffer[J][P][3]; 
private:
	int x; 
	int y; 
	int h; 
	int w; 

};