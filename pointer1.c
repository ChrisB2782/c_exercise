#include <stdio.h>

int main() {
    	int a = 10;
    	char b = 'X';
    	double c = 3.14;
    	int *ptrA = &a;
    	char *ptrB = &b;
    	double *ptrC = &c;
    	printf("a Value: %d, Address: %p\n", a, &a);
    	printf("a Pointer Value: %d, Pointer Adress: %p\n", *ptrA, ptrA);
    	printf("b Value: %c, Address: %p\n", b, &b);
    	printf("b Pointer Value: %c, Pointer Address: %p\n", *ptrB, ptrB);
    	printf("c Value: %f, Address: %p\n", c, &c);
    	printf("c Pointer Value: %f, Pointer Address: %p\n", *ptrC, ptrC);
    	return 0;
}
