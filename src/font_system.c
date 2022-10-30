#include "font_system.h"

void font_system_initialize(SDL_Renderer* sdl_renderer) {
	TTF_Init();
	TTF_Font* font = TTF_OpenFont( "./res/font/dogicapixel.ttf", 28);
	SDL_Color font_color = {.r = 255, .g = 255, .b = 255};
	SDL_Surface* sdl_surface = TTF_RenderText_Solid(font, "Hello!", font_color);
	SDL_Texture* sdl_texture = SDL_CreateTextureFromSurface(sdl_renderer, sdl_surface);
	SDL_Rect Text_Rect;
	Text_Rect.x = 0;
	Text_Rect.y = 0;
	Text_Rect.w = sdl_surface -> w;
	Text_Rect.h = sdl_surface -> h;
	SDL_FreeSurface(sdl_surface);
};

/*
void draw_text(char* messsage, SDL_Renderer sdl_renderer, SDL_Rect sdl_rect) {
	

	SDL_RenderCopyEx(sdl_renderer, 
}
*/

void font_system_shutdown(SDL_Texture* sdl_texture, TTF_Font* font) {
	TTF_CloseFont(font);
	SDL_DestroyTexture(sdl_texture);
	TTF_Quit();
};
