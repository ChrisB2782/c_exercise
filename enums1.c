#include <stdio.h>

int main() {
    	enum Days {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    	int dayNum;
    	printf("Enter a number (1-7) to get the day of the week: ");
    	scanf("%d", &dayNum);
   	enum Days day = dayNum;
    	switch(day) {
        	case Monday:
            		printf("Monday\n");
            		break;
        	case Tuesday:
            		printf("Tuesday\n");
            		break;
        	case Wednesday:
            		printf("Wednesday\n");
            		break;
        	case Thursday:
            		printf("Thursday\n");
            		break;
        	case Friday:
            		printf("Friday\n");
            		break;
        	case Saturday:
            		printf("Saturday\n");
            		break;
        	case Sunday:
            		printf("Sunday\n");
            		break;
	}
    	return 0;
}
