#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>


extern SDL_Renderer* render;
extern int game_state;

void LoadMenuResources()
{
	background.texture = LoadTexture("");
    TTF_font* font = TTF_OpenFont("m5x7.ttf",32);

}

void Menu()
{
    int menpos = 0;
    const int nummenu = 4;
    const char* labels[nummenu] = {"Novo jogo","Opções","Ranking","Creditos"};
    SDL_surface* menus[nummenu];
    bool menuselect[nummenu] = {0,0,0,0};
    SDL_Color cores[2] = {{255,255,255,0},{126,126,126,0}};

    menus[0] = TTF_RenderText_Solid(font,labels[0],cores[0]);
    menus[1] = TTF_RenderText_Solid(font,labels[1],cores[0]);
    menus[2] = TTF_RenderText_Solid(font,labels[2],cores[0]);
    menus[3] = TTF_RenderText_Solid(font,labels[3],cores[0]);

    SDL_Rect position[nummenu] = {{""},{""},{""},{""}};



    SDL_Event e;

	while(SDL_PollEvent(&e) != 0)
	{
		if(e.type == SDL_QUIT)
            /*chamar uma funçao de termino*/

        if(e.type == SDL_KEYDOWN)
        {
            if(e.key.keysym.sym ==SDLK_ESCAPE)
                /*chamar uma funçao de termino*/
            if(e.key.keysym.sym ==SDLK_UP)
                menpos +=1;
            if(e.key.keysym.sym ==SDLK_DOWN)
                menpos -=1;
            if(e.key.keysym.sym ==SDLK_SPACE)

        }
        if(e.type == SDL_KEYUP)
        {
            if(e.key.keysym.sym ==SDLK_ESCAPE)
                /*chamar uma funçao de termino*/
            if(e.key.keysym.sym ==SDLK_UP){
            }
            if(e.key.keysym.sym ==SDLK_DOWN){
            }



	}

	SDL_RenderClear(render);
	SDL_RenderCopy(render, background.texture, NULL, NULL);
	/*
		for(int j = 0; j < 1; j++)

	*/
	SDL_RenderPresent(render);
}

}
