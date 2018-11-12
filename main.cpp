#include <iostream>
#include <string.h>
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
        for(int y=0; y < Screen::SCREEN_HEIGHT; y++){
            for(int x=0; x < Screen::SCREEN_WIDTH; x++){
                screen.setPixel(x, y, 128, 0, 255);
            }
        }

        screen.update();
        if(screen.procesEvents() == false){ break; }
    }
    screen.close();

	return 0;
}
