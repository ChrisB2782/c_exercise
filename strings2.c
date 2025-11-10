#include <stdio.h>

int mystrlen(char str[]) {
	int len = 0;
    	while (str[len] != '\0') {
        	len++;
    	}
    	return len;
}

int main() {
    	char str[100];
    	printf("Enter a string: ");
    	scanf("%s", str);
    	int len = mystrlen(str);
    	printf("Length of the string is: %d\n", len);
    	return 0;
}
