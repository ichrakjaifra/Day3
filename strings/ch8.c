#include <stdio.h>
#include <ctype.h>

int main() {
    char C[100];
    int taille;
    printf("Entrez une chaine de caracteres : ");
    gets(C);
    taille=strlen(C);
    for(int i=0;i<taille;i++) {
        C[i] = tolower(C[i]);
    }
    printf("La chaine modifiee est : %s\n", C);
    return 0;
}