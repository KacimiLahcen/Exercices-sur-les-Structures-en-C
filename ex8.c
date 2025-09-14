#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Cercle {
    float rayon;
};

float aire(struct Cercle crcle) {
    return 3.14 * pow(crcle.rayon,2) ;
}

int main() {

    struct Cercle crcle;

    printf("valeur de rayon : ");
    scanf("%f", &crcle.rayon);

    printf("L'aire de cercle : %.2f\n", aire(crcle));


    return 0;
}
