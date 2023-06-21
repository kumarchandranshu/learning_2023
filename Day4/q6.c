#include <stdio.h>

void decimalToBinary(int decimal) {
    printf("Binary: ");
    if (decimal == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimalToOctal(int decimal) {
    printf("Octal: ");
    if (decimal == 0) {
        printf("0");
        return;
    }

    int octal[100];
    int i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int decimal) {
    printf("Hexadecimal: ");
    if (decimal == 0) {
        printf("0");
        return;
    }

    char hex[100];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;

        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }

        decimal = decimal / 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);

    return 0;
}
