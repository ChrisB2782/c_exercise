#include <stdio.h>

struct Student {
    	char name[50];
    	int age;
};

int main() {
    	struct Student chris = {"Chris", 19};
    	struct Student *p = &chris;
    	printf("Name: %s\n", p->name);
    	printf("Age: %d\n", p->age);
    	return 0;
}

