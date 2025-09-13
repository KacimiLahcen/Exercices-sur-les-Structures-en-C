#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Livre {
    int anneex;
    char auteurx[100];
    char titrex[100];
};

struct Livre fonction(const char* titre, const char* auteur, int annee) {
    struct Livre book;
    strcpy(book.titrex, titre);
    strcpy(book.auteurx, auteur);
    book.anneex = annee;
    return book;
}

int main() {

    struct Livre book = fonction("Youcode book", "youssef", 2025);


    printf("\"%s\" ecrit par %s en l'annee %d\n", book.titrex, book.auteurx, book.anneex);

    return 0;
}
