#pragma once
#include <SDL.h>
#include <SDL_image.h>

#include "Game.h"
#include "TextureManager.h"

class GameObject
{
protected:
	int xpos;
	int ypos;

	SDL_Texture* texture;
	SDL_Rect srcRect;
	SDL_Rect destRect;

public:
	GameObject(const char* textureLocation,int x, int y);

	virtual void render();
	virtual void update();
	virtual ~GameObject();
};
