#include <stdio.h>

int main() {
	int choice;
	double balance = 1000.0, amount;\
	printf("Welcome to the ATM!\n");
    	do {
		printf("1. Check Balance\n");
        	printf("2. Deposit\n");
        	printf("3. Withdraw\n");
        	printf("4. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);
        	switch (choice) {
            		case 1:
                		printf("Your balance is $%d\n", balance);
                		break;
            		case 2:
                		printf("Enter deposit amount: ");
                		scanf("%lf", &amount);
                		if (amount > 0) {
                    			balance += amount;
                    			printf("Deposit successful. Your new balance is $%d\n", balance);
				} 
				else {
					printf("Deposit unsuccessful.\n");
				}
				break;
            		case 3:
				printf("Enter withdrawal amount: ");
                		scanf("%lf", &amount);
                		if (amount > 0 && amount <= balance) {
                    			balance -= amount;
                    			printf("Withdrawal successful. Your new balance is $%d\n", balance);
				} 
				else {
                    			printf("Withdrawal unsuccessful.\n");
				}
                		break;
            	case 4:
                	printf("Thank you for using the ATM!\n");
                	break;
            	default:
                	printf("Invalid choice.\n");
        	}
    	} 
	while (choice != 4);
    	return 0;
}
