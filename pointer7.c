#include <stdio.h>

void copy(char *dest, char *src) {
    	while (*src != '\0') {
        	*dest = *src;
        	dest++;
        	src++;
    	}
    	*dest = '\0';
}

int main() {
    	char src[] = "hello world";
    	char dest[10];
    	copy(dest, src);
    	printf("Copied String: %s", dest);
    	return 0;
}
