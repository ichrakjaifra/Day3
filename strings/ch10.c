#include <stdio.h>
#include <string.h>

int main() {
    char chaine_principale[100];
    char sous_chaine[100];

    printf("Entrez la chaine principale : ");
    gets(chaine_principale);
    printf("Entrez la souschaine : ");
    gets(sous_chaine);
    char *ptr = strstr(chaine_principale, sous_chaine);
    if (ptr != NULL) {
        printf("La sous-chaine est trouvee dans la chaîne principale\n");
    } else {
        printf("La sous-chaine n'est pas trouvee dans la chaîne principale\n");
    }
    return 0;
}