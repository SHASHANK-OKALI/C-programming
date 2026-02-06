//matrix multiplication

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int r1, c1, r2, c2;
//     printf("Enter rows and columns of Matrix A: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter rows and columns of Matrix B: ");
//     scanf("%d %d", &r2, &c2);

//     if (c1 != r2) {
//         printf("Multiplication not possible.\n");
//         return 1;
//     }

//     int **A = malloc(r1 * sizeof *A);
//     int **B = malloc(r2 * sizeof *B);
//     int **C = malloc(r1 * sizeof *C);

//     for (int i = 0; i < r1; i++) A[i] = malloc(c1 * sizeof *A[i]);
//     for (int i = 0; i < r2; i++) B[i] = malloc(c2 * sizeof *B[i]);
//     for (int i = 0; i < r1; i++) C[i] = calloc(c2, sizeof *C[i]);

//     printf("Enter Matrix A:\n");
//     for (int i = 0; i < r1; i++)
//         for (int j = 0; j < c1; j++)
//             scanf("%d", &A[i][j]);

//     printf("Enter Matrix B:\n");
//     for (int i = 0; i < r2; i++)
//         for (int j = 0; j < c2; j++)
//             scanf("%d", &B[i][j]);

//     for (int i = 0; i < r1; i++)
//         for (int j = 0; j < c2; j++)
//             for (int k = 0; k < c1; k++)
//                 C[i][j] += A[i][k] * B[k][j];

//     printf("Product Matrix:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++)
//             printf("%d ", C[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

//Numerical integration

#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x);  // example function
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; i++)
        sum += f(a + i * h);
    return sum * h;
}

int main() {
    double a, b;
    int n;
    printf("Enter lower and upper limits: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter number of intervals: ");
    scanf("%d", &n);

    double result = trapezoidal(a, b, n);
    printf("Integral (approx) = %.6lf\n", result);
    return 0;
}

