#include <stdio.h>

int main() {
	int num = 27;
	float rate = 3.24f;
	double distance = 12345.6789;
	char letter = 'C';
	printf("Int: %d, Float: %f, Double: %.lf, Char: %c\n", num, rate, distance, letter);
	char a='a', b='b', c='c', x='x', y='y', z='z';
	char A='A', B='B', C='C', X='Y', Y='Y', Z='Z';
	printf("Characters: %c %c %c %c %c %c %c %c %c %c %c %c\n", a, b, c, x, y, z, A, B, C, X, Y, Z);
	char a2=97, b2=98, c2=99, x2=120, y2=121, z2=122;
        char A2=65, B2=66, C2=67, X2=88, Y2=89, Z2=90;
        printf("ASCII Characters: %c %c %c %c %c %c %c %c %c %c %c %c\n", a2, b2, c2, x2, y2, z2, A2, B2, C2, X2, Y2, Z2);
	float sciFloat = 1.23e3f;
	double sciDouble = 4.56e-4;
	printf("Scientific Float: %e, Scientific Double: %e\n", sciFloat, sciDouble);
	float precision = 1.23456789f;
	printf("Decimal Precisions\n");
	printf("%.1f\n", precision);
	printf("%.2f\n", precision);
	printf("%.4f\n", precision);
	printf("%.6f\n", precision);
	printf("Sizes\n");
	printf("int:%zu\n", sizeof(int));
	printf("float:%zu\n", sizeof(float));
	printf("double:%zu\n", sizeof(double));
	printf("char:%zu\n", sizeof(char));
	int xVal = 12, yVal = 3;
	float result = (float)xVal / yVal;
	printf("Division = %.3f\n", result);
	printf("Percentage = %.2f%%\n", result * 100);
	int normalInt = 1000;
	double normalDouble = 3.14;
	short int small = -100;
	unsigned int count = 25;
	long int big = 1234567890;
	long long int veryBig = 9223372036854775807;
	unsigned long long int huge = 18446744073709551615U;
	long double precise = 3.141592653589793238L;
	return 0;
}
