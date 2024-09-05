#include <stdio.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5];
};


int main() {
    struct Etudiant etudiant;
    int i;

    printf("Entrez le nom : ");
    scanf("%s", etudiant.nom);

    printf("Entrez le prenom : ");
    scanf("%s", etudiant.prenom);

    printf("Entrez les notes (5 au total) : \n");
    for (i = 0; i < 5; i++) {
        printf("Note %d : ", i + 1);
        scanf("%d", &etudiant.notes[i]);
    }

    printf("\nInformations de l'etudiant :\nNom : %s\nPrenom : %s\nNotes : ", etudiant.nom, etudiant.prenom);
    for (i = 0; i < 5; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}
