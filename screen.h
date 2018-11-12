#ifndef SCREEN_H
#define SCREEN_H

#include <SDL.h>

namespace srn{

class Screen{
private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;

public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;

    Screen();
    bool checkForInitError();
    bool checkForWindowError();
    bool checkForRendererError();
    bool checkForTextureError();
    bool init();
    void update();
    bool procesEvents();
    void setPixel(int x, int y, Uint32 red, Uint32 green, Uint32 blue);
    void close();

};

}

#endif // SCREEN_H
