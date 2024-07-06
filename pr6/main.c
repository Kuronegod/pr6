#include <stdio.h>
#include <math.h>

double vector_length(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2;
    double length;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    length = vector_length(x1, y1, x2, y2);
    printf("%.6lf\n", length);

    return 0;
}
