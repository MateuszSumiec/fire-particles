#ifndef SCREEN_H
#define SCREEN_H

#include <SDL.h>

namespace srn{

class Screen{
private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer1;
    Uint32 *m_buffer2;

public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;

    Screen();
    bool init();
    bool checkForInitError();
    bool checkForWindowError();
    bool checkForRendererError();
    bool checkForTextureError();
    void setBuffers();
    void colorBitShift();
    void update();
    void boxBlur();
    //void setAverageColor();
    void swapBuffers();
    void setPixel(int x, int y, Uint32 red, Uint32 green, Uint32 blue);
    bool procesEvents();
    void close();

};

}

#endif // SCREEN_H
