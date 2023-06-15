#include <stdio.h>

int bit_operations(int num, int opertion_type) {
    switch (opertion_type) {
        case 1:
            num |= 1 << 0;  // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 30);  // Clear 31st bit
            break;
        case 3:
            num ^= 1 << 15;  // Toggle 16th bit
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return -1;  // Return -1 to indicate an error
    }

    return num;  // Return the modified number
}

int main() {
    int num, opertion_type, result;

    printf("Enter the number (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &opertion_type);

    result = bit_operations(num, opertion_type);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}