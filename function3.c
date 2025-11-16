#include <stdio.h>

int gcd(int x, int y) {
    	if (y == 0) {
		return x;
	}
    	return gcd(y, x % y);
}

int main() {
    	int a1 = 2, b1 = 18;
    	int a2 = 27, b2 = 28;
    	printf("GCD of %d and %d is %d\n", a1, b1, gcd(a1, b1));
    	printf("GCD of %d and %d is %d\n", a2, b2, gcd(a2, b2));
    	return 0;
}
