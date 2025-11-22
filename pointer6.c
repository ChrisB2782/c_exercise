#include <stdio.h>

int length(char *s) {
    	char *ptr = s;
    	while (*ptr != '\0') {
        	ptr++;
    	}
    	return ptr - s;
}

int main() {
    	char validStr[] = "hello world";
	char nullStr[] = "hell\0o world";
    	int len1 = length(validStr);
	int len2 = length(nullStr);
    	printf("Valid Length: %d", len1);
	printf("Null Length: %d", len2);
    	return 0;
}
