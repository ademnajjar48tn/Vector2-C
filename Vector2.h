#include <math.h>

typedef struct {
	float x = 0;
	float y = 0;
}Vector2;

struct Vector2* Vector2_new(int x = 0, int y = 0){
	struct Vector2* result = (struct Vector2*) malloc(sizeof(struct Vector2));
	
	Vector2->x = 0;
	Vector2->y = 0;

	return result;
}

