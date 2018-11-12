#include <iostream>
#include <string.h>
#include <math.h>
#include <SDL.h>
#include "screen.h"

using namespace std;
using namespace srn;

int main( int argc, char* args[] )
{
    Screen screen;

    if(screen.init() == false){
        cout << "Error initialising SDL" << endl;
    }

    while(true){
        int elapsed = SDL_GetTicks();
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

        for(int y=0; y < Screen::SCREEN_HEIGHT; y++){
            for(int x=0; x < Screen::SCREEN_WIDTH; x++){
                screen.setPixel(x, y, red, green, blue);
            }
        }

        for(int y=0; y < Screen::SCREEN_HEIGHT; y++){
            for(int x=0; x < Screen::SCREEN_WIDTH; x++){
                screen.setPixel(x, y, red, green, blue);
            }
        }

        screen.update();
        if(screen.procesEvents() == false){
                break;
        }
    }
    screen.close();

	return 0;
}
