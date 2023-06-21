#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int evenIndexSum = 0;
    int oddIndexSum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            
            evenIndexSum += arr[i];
        } else {
           
            oddIndexSum += arr[i];
        }
    }

    return evenIndexSum - oddIndexSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = calculateDifference(arr, size);

    printf("Difference between even-indexed and odd-indexed elements: %d\n", difference);

    return 0;
}
