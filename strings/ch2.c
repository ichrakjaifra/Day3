#include <stdio.h>

int main() {
    char chaine[] = "je suis ichrak";
    int i = 0;

    while (chaine[i] != '\0') {
        i++;
    }
    printf("La longueur de la chaine est : %d\n", i);
    return 0;
}

/*
int main(){
    char C[100];
    int i=0;
    printf("Veuillez saisir une chaine:"");
    gets(C);
    for(int i=0;C[i]!='\0;i++)
    i++;
    printf("La longueur de la chaine est : %d\n", i);
    printf("La longueur de la chaine est : %d", strlzn(C));
    return 0;
}
*/