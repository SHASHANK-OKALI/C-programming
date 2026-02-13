//verify identity

#include <stdio.h>
#include <math.h>

int main() {
    double deg, rad;
    scanf("%lf", &deg);

    rad = deg * M_PI / 180;

    double result = pow(sin(rad), 2) + pow(cos(rad), 2);

    printf("Value = %.2lf", result);

    return 0;
}