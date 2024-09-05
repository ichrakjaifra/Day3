#include <stdio.h>

struct Livre {
    char titre[50];
    char auteur[50];
    int annee;
};

struct Livre creerLivre(char titre[], char auteur[], int annee) {
    struct Livre livre;
    strcpy(livre.titre, titre);
    strcpy(livre.auteur, auteur);
    livre.annee = annee;
    return livre;
}

int main() {
    struct Livre livre1;
    
    livre1 = creerLivre("aaaaa", "bbbbb", 2005);

    printf("Titre : %s\nAuteur : %s\Anne : %d\n", livre1.titre, livre1.auteur, livre1.annee);
    
    return 0;

}
