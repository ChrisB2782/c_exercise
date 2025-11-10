#include <stdio.h>

typedef int Integer;

int main() {
	Integer a = 5, b = 3, sum, diff, prod; 
	float quotient;
	sum = a + b;
	diff = a - b;
	prod = a * b;
	quotient = (float) a/b;
	printf("Sum = %d\n", sum);
	printf("Difference = %d\n", diff);
	printf("Product = %d\n", prod);
	printf("Quotient = %.2f\n", quotient);
	return 0;
}
