#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the size of the matrices: ");
    scanf("%d", &n);
    int matrice1[n][n], matrice2[n][n], matrice3[n][n];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
	    for (j = 0; j < n; j++) {
		    scanf("%d", &matrice1[i][j]);
	    }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
	    for (j = 0; j < n; j++) {
		    scanf("%d", &matrice2[i][j]);
	    }
    }
    for (i = 0; i < n; i++) {
	    for (j = 0; j < n; j++) {
		    matrice3[i][j] = 0;
	    }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                matrice3[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }
    printf("Resultant Matrice\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", matrice3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
