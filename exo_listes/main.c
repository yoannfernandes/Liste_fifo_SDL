#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
//----------------------------Initialisation vect------------------------------
typedef struct tVector2d{
    int nX;
    int nY;
}tVector2d;

typedef struct tActor{
    SDL_Texture* textActor;
    tVector2d Vect;
    int height;
    int width;
}tActor;
//------------------------------- Liste FIFO ----------------------------------
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct File File;
struct File
{
    Element *premier;
};
//------------------------------------------------------------------------------
int main(int argc, char* argv[])
{

    int i=0;
    for(i=0;i<argc; i++){

        printf("%s",argv[i]);
    }

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    }





    SDL_DestroyWindow();
    SDL_Quit();
    return 0;
}



//on initialise la SDL
//on initialise les var,etc...
//on créer la fenetre
//on detruit a la fin
