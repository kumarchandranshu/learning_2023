#include <stdio.h>

void findMinMax(int array[], int n, int* min, int* max) {
    *min = array[0]; 
    *max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
    }
}

int main() {
    int array[] = {15, 26, 58, 41, 14}; 
    int n = sizeof(array) / sizeof(array[0]); 
    int min, max;

    findMinMax(array, n, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}