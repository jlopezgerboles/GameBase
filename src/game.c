#include "standard.h"
#include "canvas_system.h"
#include "font_system.h"

void main() {
	canvas_system_initialize();
	//font_system_initialize(SDL_Renderer* sdl_renderer);
	//canvas_system_companylogo();
	int running = TRUE;
	while(running == TRUE) {
		SDL_Delay(3000);
		running = FALSE;
	}
	//font_system_shutdown(SDL_Texture* font_texture, TTF_Font* font);
	canvas_system_shutdown();
}
