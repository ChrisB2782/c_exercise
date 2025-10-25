#include <stdio.h>

int main() {
    int n, pos, value, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
    printf("Array After Insertion\n");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
