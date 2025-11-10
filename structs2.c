#include <stdio.h>
#include <math.h>

struct Point {
	double x;
    	double y;
};

double distance(struct Point p1, struct Point p2) {
    	double dx = p2.x - p1.x;
    	double dy = p2.y - p1.y;
    	return sqrt(dx * dx + dy * dy);
}

int main() {
    	struct Point p1, p2;
    	printf("Enter x and y for point 1: ");
    	scanf("%lf %lf", &p1.x, &p1.y);
    	printf("Enter x and y for point 2: ");
    	scanf("%lf %lf", &p2.x, &p2.y);
    	double dist = distance(p1, p2);
    	printf("Distance between the points: %.2lf\n", dist);
    	return 0;
}
