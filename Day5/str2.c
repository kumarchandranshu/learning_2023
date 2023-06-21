#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

void readComplex(Complex* complex) {
    printf("Enter real part: ");
    scanf("%lf", &(complex->real));

    printf("Enter imaginary part: ");
    scanf("%lf", &(complex->imaginary));
}

void writeComplex(const Complex* complex) {
    printf("Complex number: %.2f + %.2fi\n", complex->real, complex->imaginary);
}

Complex addComplex(const Complex* complex1, const Complex* complex2) {
    Complex result;
    result.real = complex1->real + complex2->real;
    result.imaginary = complex1->imaginary + complex2->imaginary;
    return result;
}

Complex multiplyComplex(const Complex* complex1, const Complex* complex2) {
    Complex result;
    result.real = complex1->real * complex2->real - complex1->imaginary * complex2->imaginary;
    result.imaginary = complex1->real * complex2->imaginary + complex1->imaginary * complex2->real;
    return result;
}

int main() {
    Complex complex1, complex2, sum, product;

    printf("Enter details for complex number 1:\n");
    readComplex(&complex1);

    printf("Enter details for complex number 2:\n");
    readComplex(&complex2);

    sum = addComplex(&complex1, &complex2);
    printf("Sum of complex numbers:\n");
    writeComplex(&sum);

    product = multiplyComplex(&complex1, &complex2);
    printf("Product of complex numbers:\n");
    writeComplex(&product);

    return 0;
}
