#include <stdio.h>
#include <stdlib.h>

struct Personne {
    char nom[50], prenom[50];
    int age;
};

int main() {
    struct Personne employee;

    printf("Entrer le nom: ");
    scanf("%s", employee.nom);

    printf("Entrer le prenom: ");
    scanf("%s", employee.prenom);

    printf("Entrez l'age: ");
    scanf("%d", &employee.age);

    printf("\n ____||  Informations d'employés   ||____ \n");
    printf(" ===> Nom: %s\n", employee.nom);
    printf(" ===> Prenom: %s\n", employee.prenom);
    printf(" ===> Age: %d\n", employee.age);

    return 0;
}
