#include <stdio.h>
#include <stdarg.h>

int sumAll(int count, ...) {
    	va_list args;
    	va_start(args, count);
    	int sum = 0;
    	for (int i = 0; i < count; i++) {
        	sum += va_arg(args, int);
    	}
    	va_end(args);
    	return sum;
}

int main() {
    	int sum1 = sumAll(2, 18, 27, 28, 87);
    	int sum2 = sumAll(1, 15, 24, 32, 36, 54, 95);
    	printf("Sum of 4 numbers: %d\n", sum1);
    	printf("Sum of 6 numbers: %d\n", sum2);
    	return 0;
}
