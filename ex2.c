#include <stdio.h>
#include <stdlib.h>

struct Etudiant {
    char nom[40], prenom[40];
    int notes[40], lesnotes;
};

int main() {
    int i;
    struct Etudiant premiere_annee ;

    printf("Entrer le nom: ");
    scanf("%s", premiere_annee.nom);

    printf("Entrer le prenom: ");
    scanf("%s", premiere_annee.prenom);

    printf("Combien de notes? : ");
    scanf("%d", &premiere_annee.lesnotes);


    printf("Entrer ces %d notes: \n", premiere_annee.lesnotes);




    for (i = 0; i < premiere_annee.lesnotes; i++) {
        printf("note %d: ", i + 1);
        scanf("%d", &premiere_annee.notes[i]);
    }

    printf("\n ____||   Informations d'etudiant :   ||____ \n");
    printf(" ===> Nom: %s\n", premiere_annee.nom);
    printf(" ===> Prenom: %s\n", premiere_annee.prenom);
    printf(" ===> Nombre de notes: %d\n", premiere_annee.lesnotes);

    printf(" ===> notes :");
    for (i = 0; i < premiere_annee.lesnotes; i++) {
        printf(" %d ||", premiere_annee.notes[i]);
    }



    return 0;

}



