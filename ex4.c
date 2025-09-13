#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y;
};

int main() {
    struct Point *ptr= (struct Point*)malloc(sizeof(struct Point));

    if (ptr == NULL) {
        printf("allocating memory failed.\n");
        return 1;
    }


    printf("entrer x : ");
    scanf("%d", &ptr->x );    //(*ptr).x; ==  ptr->x   => same role

    printf("entrer y : ");
    scanf("%d", &ptr->y );

    printf(" ===> Coordonnées du point : (%d, %d)", ptr->x, ptr->y );


    free(ptr);

    return 0;
}
