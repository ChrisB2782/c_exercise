#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter positive integers (enter 0 or a negative number to stop):\n");
    while (1) {
	    scanf("%d", &num);
	    if (num <= 0) {
		    break;
	    }
	    sum += num;
    }
    printf("Sum is: %d\n", sum);
    return 0;
}
