## About GameBase
My own game base upon which I build my games, using the SDL2.0 framework and C language.
Please notice it is in constant development. Latest release notes: View changelog.

## Systems
As this is a learning project I had to structured the different parts of the engine to make sense of it:

Canvas system (the window for our game. Includes the window, the render and links to OpenGL)
Render system (the inners of the OpenGL)
Audio system (inlcudes sound and music, implemented through the SDL_mixer library)
Font system (the system that allows the text to be displayed in the game)
Input system (recognition of keys)

## Milestone
Implement window rendering a rotating cube and displaying text in screen while playing music. 
