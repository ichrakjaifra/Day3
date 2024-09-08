#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int i, j;
    int taille;
    printf("Entrez une chaine de caracteres : ");
    gets(chaine);
    taille= strlen(chaine);
    for (i=j=0; i<taille; i++) {
        if (chaine[i] != ' ') {
            chaine[j++] = chaine[i];
        }
    }
    chaine[j] = '\0'; 
    printf("La chaine resultante est : %s\n", chaine);
    return 0;
}