#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Produit {
  char nom[50];
  float prix;
  int quantite;
};

int main() {
  struct Produit produit1 = {"Tonik", 0.5, 50};
  struct Produit produit2 = {"momo", 1, 100};

  printf("nom : %s Prix : %.2lf DH quantite : %d\n", produit1.nom, produit1.prix, produit1.quantite);
  printf("nom : %s Prix : %.2lf DH quantite : %d\n", produit2.nom, produit2.prix, produit2.quantite);

  return 0;
}
