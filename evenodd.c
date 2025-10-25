#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], evenArr[n], oddArr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenArr[evenCount++] = arr[i];
        else
            oddArr[oddCount++] = arr[i];
    }
    printf("Even Array\n");
    for (i = 0; i < evenCount; i++)
        printf("%d ", evenArr[i]);
    printf("Odd Array\n");
    for (i = 0; i < oddCount; i++)
        printf("%d ", oddArr[i]);
    return 0;
}
