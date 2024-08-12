

#ifndef TEXTURE_H
#define TEXTURE_H

#include <glad/glad.h>

typedef unsigned int uint;
typedef unsigned char uchar;

class Texture2D {
public:
	uint ID;
	uint width, height;
	uint _internal_format;
	uint _image_format;
	uint wrap_S;
	uint wrap_T;
	uint _filter_min, _filter_max;

	Texture2D();
	void Generate(uint width, uint height, uchar* data);
	void Bind() const;
	~Texture2D();
};
#endif

