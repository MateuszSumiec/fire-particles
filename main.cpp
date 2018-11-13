#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <SDL.h>
#include "screen.h"
#include "swarm.h"

using namespace std;
using namespace srn;

int main( int argc, char* args[] )
{
    srand(time(NULL));
    Screen screen;

    if(screen.init() == false){
        cout << "Error initialising SDL" << endl;
    }

    Swarm swarm;

    while(true){
        int elapsed = SDL_GetTicks();

        screen.clear();
        swarm.update();

        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);


        const Particle * const pParticles = swarm.getParticles();
        for(int i=0; i<Swarm::N_PARTICLES; i++){
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, red, green, blue);

        }
/*

        for(int y=0; y < Screen::SCREEN_HEIGHT; y++){
            for(int x=0; x < Screen::SCREEN_WIDTH; x++){
                screen.setPixel(x, y, red, green, blue);
            }
        }
*/

        screen.update();
        if(screen.procesEvents() == false){
                break;
        }
    }
    screen.close();

	return 0;
}
