/*#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day, month, year;
};

int main() {
    struct Date *ptr;

    printf("Enter day : ");
    scanf("%d", &(*ptr).day);

    printf("Enter month : ");
    scanf("%d", &(*ptr).month);
5
    printf("Enter year : ");
    scanf("%d", &(*ptr).year);

    printf("The date is: %02d/%02d/%d\n", (*ptr).day, (*ptr).month, (*ptr).year);

    return 0;
}
