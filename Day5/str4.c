#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float height;
} Student;

void readStudentData(Student* student) {
    printf("Enter name: ");
    scanf("%s", student->name);

    printf("Enter age: ");
    scanf("%d", &(student->age));

    printf("Enter height: ");
    scanf("%f", &(student->height));
}

void printStudentData(const Student* student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Height: %.2f\n", student->height);
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    Student* students = (Student*)malloc(n * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        readStudentData(&students[i]);
    }

    printf("\n");

    
    printf("Student Data:\n");
    for (int i = 0; i < n; i++) {
        printf("Details for student %d:\n", i + 1);
        printStudentData(&students[i]);
    }

    
    free(students);

    return 0;
}
