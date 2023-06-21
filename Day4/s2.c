//convert string as integer

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";
    char *endptr;
    long int num = strtol(str, &endptr, 10);

    if (*endptr != '\0') {
        printf("Conversion error: Invalid input\n");
    } else {
        printf("Converted integer: %ld\n", num);
    }

    return 0;
}
