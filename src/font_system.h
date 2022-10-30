#pragma once

#include "standard.h"

void font_system_initialize(SDL_Renderer* sdl_renderer);
void font_system_shutdown(SDL_Texture* font_texture, TTF_Font* font);
