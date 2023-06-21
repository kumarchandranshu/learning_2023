#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width +
                boxPtr->width * boxPtr->height +
                boxPtr->height * boxPtr->length);
}

int main() {
    struct Box box;
    struct Box* boxPtr = &box;

    
    printf("Enter length: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter width: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter height: ");
    scanf("%lf", &(boxPtr->height));

    
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    
    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);

    return 0;
}
