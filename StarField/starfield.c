#include <SDL3/SDL.h>
#include <stdio.h>

int main()
{
    SDL_Init(SDL_INIT_VIDEO);
    printf("Hello, Space, this is GOD!\n");
    SDL_Window *pwindow = SDL_CreateWindow("Starfield", 50, 400, 0);

    SDL_Delay(5000);
}