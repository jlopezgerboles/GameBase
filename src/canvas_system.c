#include "canvas_system.h"

void canvas_system_initialize() {
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	SDL_Window* sdl_window = SDL_CreateWindow("GameBase", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 768, 768,
			SDL_WINDOW_BORDERLESS | SDL_WINDOW_OPENGL);
	SDL_Renderer* sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);		
	SDL_SetRenderDrawColor(sdl_renderer, 0, 0, 255, 255);
	SDL_RenderClear(sdl_renderer);
	SDL_RenderPresent(sdl_renderer);
};

void canvas_system_companylogo(SDL_Renderer* sdl_renderer) {
	//SDL_SetRenderDrawColor(sdl_renderer, 0, 255, 255, 255);
	//SDL_RenderClear(sdl_renderer);
	//for(int i = 0; i < 12; i++) {
	SDL_SetRenderDrawColor(sdl_renderer, 0, 255, 255, 255);
		//SDL_RenderDrawLine(
		//		sdl_renderer,
		//		coordinate[0].x,
		//		coordinate[0].y,
		//		coordinate[1].x,
		//		coordinate[1].y);
		SDL_RenderDrawLine(
				sdl_renderer,
				0,
				0,
				768,
				768);
		SDL_Delay(100);
		SDL_RenderPresent(sdl_renderer);
	//SDL_RenderDrawLine(sdl_renderer, 64*i, 0, 0, 768); 
	//SDL_RenderPresent(sdl_renderer);
	//SDL_Delay(300);
}	

void canvas_system_shutdown(SDL_Window* sdl_window, SDL_Renderer* sdl_renderer) {
	SDL_DestroyRenderer(sdl_renderer);
	SDL_DestroyWindow(sdl_window);
	SDL_Quit();
};
