#include <math.h>

typedef struct {
	float x = 0;
	float y = 0;
}Vector2;

struct Vector2* Vector2_new(float x = 0, float y = 0){
	struct Vector2* result = (struct Vector2*) malloc(sizeof(struct Vector2));
	
	Vector2->x = 0;
	Vector2->y = 0;

	return result;
}
struct Vector2* Vector2_new(struct Vector2*) {
	struct Vector2* result = (struct Vector2*) malloc(sizeof(struct Vector2));

	result->x = Vector2->x;
	result->y = Vector2->y;

	return result;
}
void Vector2_add(struct Vector2* vec1, struct Vector2* vec2) {
	(vec1->x) += (vec2->x);
	(vec1->y) += (vec2->y);
}
void Vector2_add(struct Vector2* vec, float x, float y) {
	(vec->x) += (x);
	(vec->x) += (y);
}
void Vector2_sub(struct Vector2* vec1, struct Vector2* vec2) {
	(vec1->x) -= (vec2->x);
	(vec1->y) -= (vec2->y);
}
void Vector2_sub(struct Vector2* vec, float x, float y) {
	(vec->x) -= (x);
	(vec->x) -= (y);
}
void Vector2_multi(struct Vector2* vec1, struct Vector2* vec2) {
	(vec1->x) *= (vec2->x);
	(vec1->y) *= (vec2->y);
}
void Vector2_multi(struct Vector2* vec, float x, float y) {
	(vec->x) *= (x);
	(vec->x) *= (y);
}
void Vector2_div(struct Vector2* vec1, struct Vector2* vec2) {
	(vec1->x) /= (vec2->x);
	(vec1->y) /= (vec2->y);
}
void Vector2_div(struct Vector2* vec, float x, float y) {
	(vec->x) /= (x);
	(vec->x) /= (y);
}
void Vector2_sqrt(struct Vector2* vec) {
	vec->x = (float) sqrt(vec->x);
	vec->y = (float) sqrt(vec->y);
}
