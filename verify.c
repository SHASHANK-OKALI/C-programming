//verify identity

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double deg, rad;
//     scanf("%lf", &deg);

//     rad = deg * M_PI / 180;

//     double result = pow(sin(rad), 2) + pow(cos(rad), 2);

//     printf("Value = %.2lf", result);

//     return 0;
// }


//convert degree to radians


// #include <stdio.h>
// #include <math.h>

// int main() {
//     double deg, rad;

//     scanf("%lf", &deg);
//     rad = deg * M_PI / 180;
//     printf("Radians = %.2lf\n", rad);

//     scanf("%lf", &rad);
//     deg = rad * 180 / M_PI;
//     printf("Degrees = %.2lf", deg);

//     return 0;
// }

//find hypotenuse

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double adj, deg, rad;
//     scanf("%lf %lf", &adj, &deg);

//     rad = deg * M_PI / 180;

//     double hyp = adj / cos(rad);

//     printf("Hypotenuse = %.2lf", hyp);

//     return 0;
// }

//Inverse trignometric 

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    printf("arcsin = %.2lf", asin(x) * 180 / M_PI);

    return 0;
}