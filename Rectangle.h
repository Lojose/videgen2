#pragma once
#define J 720
#define P 480
class Rectangle {
public:
	Rectangle(): w(0), h(0) {}
	void draw_rect(); 
	void setSize(int h, int w); 
	void setColor(unsigned char red, unsigned char green, unsigned char blue); 

private:
	int x; 
	int y; 
	int w;
	int h;  
	unsigned char r[J][P][3]; 
	unsigned char red; 
	unsigned char green; 
	unsigned char  blue;
	//friend class Frame;
};