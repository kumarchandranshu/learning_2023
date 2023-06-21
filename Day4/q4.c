#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            // Add even element to evenSum
            evenSum += arr[i];
        } else {
            // Add odd element to oddSum
            oddSum += arr[i];
        }
    }

    return evenSum - oddSum;
}

int main() {
    int arr[] = {11, 12, 53, 24, 75};
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = calculateDifference(arr, size);

    printf("Difference between even and odd elements: %d\n", difference);

    return 0;
}
