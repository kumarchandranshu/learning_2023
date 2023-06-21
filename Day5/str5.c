#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swapFields(Point* point1, Point* point2) {
    int temp = point1->x;
    point1->x = point2->x;
    point2->x = temp;

    temp = point1->y;
    point1->y = point2->y;
    point2->y = temp;
}

int main() {
    Point point1, point2;

   
    printf("Enter values for point1:\n");
    printf("x: ");
    scanf("%d", &(point1.x));
    printf("y: ");
    scanf("%d", &(point1.y));

    
    printf("Enter values for point2:\n");
    printf("x: ");
    scanf("%d", &(point2.x));
    printf("y: ");
    scanf("%d", &(point2.y));

    
    printf("Original values:\n");
    printf("Point1: x=%d, y=%d\n", point1.x, point1.y);
    printf("Point2: x=%d, y=%d\n", point2.x, point2.y);

    swapFields(&point1, &point2);

    printf("Swapped values:\n");
    printf("Point1: x=%d, y=%d\n", point1.x, point1.y);
    printf("Point2: x=%d, y=%d\n", point2.x, point2.y);

    return 0;
}
