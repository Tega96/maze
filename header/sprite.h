#ifndef SPRITE_H_
#define SPRITE_H_

#include "main.h"

typedef struct
{
	float x;
	float y;
	float distance;
	float angle;
	bool visible;
	int texture;
}sprite_t;

void	renderSpriteProjection(void);
void	renderMapSprites(void);

#endif /* _SPRITE_H_ */
