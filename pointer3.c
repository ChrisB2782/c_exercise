#include <stdio.h>

int main() {
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = *ptrA + *ptrB;
    printf("Sum = %d\n", sum);
    return 0;
}
