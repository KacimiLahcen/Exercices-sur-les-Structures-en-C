#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employe {
    char nom[50];
    float salaire;
};

int main() {
    int n = 2, i;
    struct Employe *tableau;
    tableau = malloc(n * sizeof(struct Employe));

      if (tableau == NULL) {
        printf("allocating memory failed.\n");
        return 1;
    }



    strcpy(tableau[0].nom, "Tom");
    tableau[0].salaire = 100000;
    strcpy(tableau[1].nom, "Franc");
    tableau[1].salaire = 350000;

    for (i = 0; i < n; i++)
        printf("Salaire d'employe %s est : %.2f $.\n", tableau[i].nom, tableau[i].salaire);

    free(tableau);
    return 0;
}
