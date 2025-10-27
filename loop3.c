#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, secret;
    srand(time(0));
    secret = rand() % 20 + 1;
    do {
	    printf("Guess the number between 1 and 20: ");
	    scanf("%d", &guess);
	    if (guess > secret) {
		    printf("Lower!\n");
	    }
	    else if (guess < secret) {
		    printf("Higher!\n");
	    }
	    else {
		    printf("Correct!\n");
	    }
    } 
    while (guess != secret);
    return 0;
}
