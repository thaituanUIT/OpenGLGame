#pragma once
#define GAME_OBJECT_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include "sprite_renderer.h"
#include "resource_manager.h"

class Plane {
public:
	Texture2D texture;
	glm::vec2 velocity;
	glm::vec3 direction;
};

class Asteroid {

};