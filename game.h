
#ifndef GAME_H
#define GAME_H

#include<glad/glad.h>
typedef unsigned int uint;

enum GAME_STATE {
	GAME_START,
	GAME_ACTIVE,
	GAME_WIN
};

class Game {
private:
public:
	GAME_STATE State;
	bool Key[1024];
	uint width, height;
	//constructor
	Game();
	Game(uint width, uint height);

	void Init();
	void ProcessInput(float data);
	void Update(float data);
	void Render();
	//destructor
	~Game();
};
#endif
