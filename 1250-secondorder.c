// 2nd order polynomial equation, math predefined functions
#include <stdio.h>
#include <stdlib.h>
#include <math.h>   // we need this for math functions!

int main() {
    double a, b, c;
    double root1, root2, realPart, imaginaryPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c of an equation like ax^2 + bx + c = 0: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = pow(b, 2) - 4 * a * c; // double pow(double base, double exponent);, in this case b*b is definitely more quick and efficient

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a); // double sqrt(double x);	
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %lg and %lg\n", root1, root2);
    } else if (discriminant == 0) {
        // One real and equal root
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } else {
        // Complex conjugate roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %lg + %lgi and %.lg - %lgi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
