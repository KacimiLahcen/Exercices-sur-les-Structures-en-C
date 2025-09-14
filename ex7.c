#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day, month, year;
};

int main() {

    struct Date *ptr = (struct Date*)malloc(sizeof(struct Date));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter day: ");
    scanf("%d", &ptr->day);    //same as : (*ptr).day

    printf("Enter month: ");
    scanf("%d", &ptr->month);

    printf("Enter year: ");
    scanf("%d", &ptr->year);


    printf("La date: %02d/%02d/%d\n", ptr->day, ptr->month, ptr->year);

    free(ptr);

    return 0;
}
