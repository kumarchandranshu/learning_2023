#include <stdio.h>
#include <string.h>

void rotateString(char* str, int positions) {
    int length = strlen(str);

    
    positions %= length;

    
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (int i = 0, j = positions - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

   
    for (int i = positions, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    int positions = 3;

    printf("Original string: %s\n", str);

    rotateString(str, positions);

    printf("Rotated string: %s\n", str);

    return 0;
}
