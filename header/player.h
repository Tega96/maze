#ifndef PLAYER_H_
#define PLAYER_H_

#include "main.h"

typedef struct {
	float x;
	float y;
	float width;
	float height;
	int turnDirection; // -1 for left, +1 for right
	int walkDirection; // -1 for back, +1 for front
	float rotationAnglt;
	float walkSpeed;
	float turnSpeed;
} player_t;

extern player_t player;

void movePlayer(float deltaTime);
void renderMapPlayer(void);

#endif /* PLAYER_H_ */
