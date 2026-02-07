//complex number arithmetic

// #include <stdio.h>

// typedef struct {
//     float real;
//     float imag;
// } Complex;

// Complex add(Complex n1, Complex n2) {
//     Complex temp;
//     temp.real = n1.real + n2.real;
//     temp.imag = n1.imag + n2.imag;
//     return temp;
// }

// Complex multiply(Complex n1, Complex n2) {
//     Complex temp;
//     temp.real = (n1.real * n2.real) - (n1.imag * n2.imag);
//     temp.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
//     return temp;
// }

// int main() {
//     Complex c1 = {3.0, 4.0}; // 3 + 4i
//     Complex c2 = {1.0, -2.0}; // 1 - 2i
//     Complex sum, prod;

//     sum = add(c1, c2);
//     prod = multiply(c1, c2);

//     printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
//     printf("Product: %.2f + %.2fi\n", prod.real, prod.imag);

//     return 0;
// }

//taylor series expansion

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, deg, sum, term;

    printf("Enter angle in degrees: ");
    scanf("%f", &deg);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Convert degrees to radians
    x = deg * (3.14159 / 180);
    
    term = x;
    sum = x;

    for (i = 1; i <= n; i++) {
        // Each term relates to the previous one to avoid calculating factorials from scratch
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }

    printf("Taylor Series sin(%f) = %f\n", deg, sum);
    printf("Math Library sin(%f) = %f\n", deg, sin(x));

    return 0;
}