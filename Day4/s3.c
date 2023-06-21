#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countDaysInString(const char* str) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (isdigit(str[i])) {
            int j = i;
            while (isdigit(str[j]) && j < length) {
                j++;
            }

            if (j - i == 1 || j - i == 2) {
                int day = atoi(str + i);
                if (day >= 1 && day <= 31) {
                    count++;
                }
            }

            i = j;
        }
    }

    return count;
}

int main() {
    const char* str = "Today is the 15th of the month, and it will rain for the next 5 days.";

    int dayCount = countDaysInString(str);

    printf("Number of days in the string: %d\n", dayCount);

    return 0;
}
