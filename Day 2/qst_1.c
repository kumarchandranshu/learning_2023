#include <stdio.h>

void printExponent(double x) {
    unsigned long long* ptr = (unsigned long long*)&x;
    unsigned long long bits = *ptr;

    
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    
    printf("Exponent (hex): 0x%llx\n", exponent);

    
    printf("Exponent (binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%llu", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}