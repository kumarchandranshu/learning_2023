#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

void readTime(Time* time) {
    printf("Enter hours: ");
    scanf("%d", &(time->hours));

    printf("Enter minutes: ");
    scanf("%d", &(time->minutes));

    printf("Enter seconds: ");
    scanf("%d", &(time->seconds));
}

void printTime(const Time* time) {
    printf("%02d:%02d:%02d\n", time->hours, time->minutes, time->seconds);
}

Time calculateDifference(const Time* time1, const Time* time2) {
    Time difference;

    int totalSeconds1 = time1->hours * 3600 + time1->minutes * 60 + time1->seconds;
    int totalSeconds2 = time2->hours * 3600 + time2->minutes * 60 + time2->seconds;
    int diffSeconds = totalSeconds1 - totalSeconds2;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    Time time1, time2, difference;

    printf("Enter details for time period 1:\n");
    readTime(&time1);

    printf("Enter details for time period 2:\n");
    readTime(&time2);

    difference = calculateDifference(&time1, &time2);

    printf("Difference between time periods:\n");
    printTime(&difference);

    return 0;
}
