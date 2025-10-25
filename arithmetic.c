#include <stdio.h>
#include <stdbool.h>

int main() {
	int x = 0;
	printf("x = %d\n", x);
	x++;
	printf("x++ = %d\n", x);
	x = 0;
	printf("x = %d\n", x);
	++x;
	printf("++x = %d\n", x);
	x = 0;
	printf("x = %d\n", x);
        x--;
        printf("x-- = %d\n", x);
        x = 0;
        printf("x = %d\n", x);
        --x;
        printf("--x = %d\n", x);
	int a = 9, b = 5; 
	a -= b; printf("a -= b: %d\n", a);
	a += b; printf("a += b: %d\n", a);
	a *= b; printf("a *= b: %d\n", a);
	a /= b; printf("a /= b: %d\n", a);
	a %= b; printf("a %%= b: %d\n", a);
	a &= b; printf("a &= b: %d\n", a);
	a |= b; printf("a |= b: %d\n", a);
	a ^= b; printf("a ^= b: %d\n", a);
	a >>= b; printf("a >>= b: %d\n", a);
	a <<= b; printf("a <<= b: %d\n", a);
	bool isLoggedIn = true;
	bool isAdmin = false;
	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
	printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");
	isLoggedIn = 1;
	isAdmin = 0;
	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
	printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");
	int d;
	a = 1, b = 0;
	int c = 1;
	d = a && b || c;
	printf("a && b || c = %d\n", d);
	d = (a && b) || c;
	printf("(a && b) || c = %d\n", d);
	d = a || b && c;
	printf("a || b && c = %d\n", d);
	d = (a || b) && c;
	printf("(a || b) && c = %d\n", d);
	d = !a && b;
	printf("!a && b = %d\n", d);
	return 0;
}	
