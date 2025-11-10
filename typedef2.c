#include <stdio.h>

typedef struct {int x,y,z;} Vector;
Vector add(Vector v1, Vector v2) {
	Vector result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;
}

int main() {
	Vector v1 = {1,2,3}, v2 = {4,5,6}, vSum;
	vSum = add(v1,v2);
	printf("Sum Vector: x = %d y = %d z = %d\n", vSum.x, vSum.y, vSum.z);
	return 0;
}
