#include <stdio.h>

int main() {
	int choice;
	printf("Vending Machine Options:\n");
	printf("1. Soda - $1.50\n");
	printf("2. Water - $1.00\n");
	printf("3. Chips - $2.00\n");
	printf("4. Candy - $1.25\n");
	printf("Enter your selection (1-4): ");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			printf("You seleced Soda. Price: $1.50\n");
			break;
		case 2:
                        printf("You seleced Water. Price: $1.00\n");
                        break;
                case 3:
                        printf("You seleced Chips. Price: $2.00\n");
                        break;
                case 4:
                        printf("You seleced Candy. Price: $1.25\n");
                        break;
		default:
			printf("Invalid selection.\n");
	}
	return 0;
}
