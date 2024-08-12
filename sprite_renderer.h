
#ifndef SPRITE_RENDERER_H
#define SPRITE_RENDERER_H
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "texture.h"
#include "shader.h"
typedef unsigned int uint;


class SpriteRenderer {
private:
	Shader shader;
	uint quadVAO;
	void initRenderData();
public:
	SpriteRenderer(Shader& Shader);

	~SpriteRenderer();

	void DrawSprite(Texture2D& Texture, glm::vec2 position, glm::vec2 size = glm::vec2(10.0f, 10.0f), 
		float rotate = 0.0f, glm::vec3 color = glm::vec3(1.0f));
};
#endif