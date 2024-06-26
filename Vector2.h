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
void Vector2_add(struct Vector2* vec1, struct Vector2* vec2) {
	(vec1->x) += (vec2->x);
	(vec1->y) += (vec2->y);
}
void Vector2_add(struct Vector2* vec, int x, int y) {
	(vec->x) += (x);
	(vec->x) += (y);
}
