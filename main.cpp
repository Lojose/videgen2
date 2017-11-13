#include <iostream>
#include <sstream>
#include <sys/stat.h>
#include <stdio.h>
#include "Frame.h"
#include "Rectangle.h"
#define J 720
#define P 480

Frame frame; 
Rectangle rec1; 
int main(int argc, char * argv[]) {
	//Rectangle rec1; 
	rec1.setSize(34, 40); 
}

/*
Frame frame; 
Rectangle rec2; 
int main(int argc, char * argv[]) {
	const double frames_per_second = 30;
	const int duration_in_seconds = 3;
	const char * cmd =
		"ffmpeg\\bin\\ffmpeg.exe "
		"-y                  "
		"-hide_banner        "
		"-f rawvideo         "
		"-pixel_format rgb24 "
		"-video_size 720x480 "
		"-r 60               "
		"-i -                "
		"-pix_fmt yuv420p    "
		"-vcodec mpeg4       "
		"-an                 "
		"-q:v 5              "
		"output.mp4          ";
	FILE * pipe = _popen(cmd, "wb");
	if (pipe == 0) {
		std::cout << "error: " << strerror(errno) << std::endl;
		return 1;
	}
	int num_frames = duration_in_seconds * frames_per_second;
	
	//Frame frame;
	//Rectangle rec2;
	rec2.setSize(40, 60);
	rec2.setColor(0, 0, 255); 
		for (int i = 0; i < num_frames; ++i) {
			double time_in_seconds = i / frames_per_second;
			rec2.draw_rect();
			frame.draw_frame(time_in_seconds);
			fwrite(frame.buffer, 3, J * P, pipe);
			frame.clear_frame(); 
		}

		fflush(pipe);
		_pclose(pipe);
		std::cout << "num_frames: " << num_frames << std::endl;
		std::cout << "Done." << std::endl;
		return 0;
	}
	*/
