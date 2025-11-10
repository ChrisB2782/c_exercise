#include <stdio.h>

struct Student {
	char name[50];
    	int roll_number;
    	float marks;
};

int main() {
    	int n, i;
   	printf("Enter number of students: ");
    	scanf("%d", &n);
    	struct Student students[n];
    	for (i = 0; i < n; i++) {
        	printf("Enter details for student %d:\n", i + 1);
        	printf("Name: ");
        	scanf(" %[^\n]", students[i].name);
        	printf("Roll number: ");
       		scanf("%d", &students[i].roll_number);
        	printf("Marks: ");
        	scanf("%f", &students[i].marks);
    	}
    	printf("Student Lists:\n");
    	for (i = 0; i < n; i++) {
        	printf("Student %d: Name: %s, Roll #: %d, Marks: %.2f\n", i + 1, students[i].name, students[i].roll_number, students[i].marks);
    	}
    	return 0;
}
