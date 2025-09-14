#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Compte {
    char nom[50];
    float solde;
};

void ajoutesolde(struct Compte *a, float value) {
    a->solde += value;
}

int main() {
    struct Compte a;

    printf("Entrer nom de client : ");
    scanf("%s", a.nom);

    printf("Entrer solde de depart: (MAD) ");
    scanf("%f", &a.solde);


    ajoutesolde(&a, 1000);
    printf("Client %s a maintenant %.2f MAD \n", a.nom, a.solde);
    return 0;
}
