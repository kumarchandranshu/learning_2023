#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* char_a = (char*)a;
    char* char_b = (char*)b;

    for (size_t i = 0; i < size; i++) {
        char temp = char_a[i];
        char_a[i] = char_b[i];
        char_b[i] = temp;
    }
}

int main() {
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 3.14, y = 2.71;
    printf("Before swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %f, y = %f\n", x, y);

    return 0;
}

