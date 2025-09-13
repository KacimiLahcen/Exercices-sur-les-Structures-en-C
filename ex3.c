#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    float longueur, largeur ;
};

float Aire (struct Rectangle notre_rectangle){
    return notre_rectangle.longueur * notre_rectangle.largeur;
}

int main()
{
    struct Rectangle notre_rectangle2;
    float aire;

    printf("Entrer l'argeur : ");
    scanf("%f", &notre_rectangle2.largeur);
    printf("Entrer longueur : ");
    scanf("%f", &notre_rectangle2.longueur);

    aire = Aire(notre_rectangle2);

    printf(" L'aire de rectangle est : %.2lf", aire);

return 0;
}
