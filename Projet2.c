#include <stdio.h>
#include<string.h>

struct Contact {
    char nom[40];
    char telephone[10];
    char email[40];
};



struct Contact contacts[100];
int nbrcontacts = 0;

void ajoutContact() {
    if (nbrcontacts < 100) {
        printf("Entrez le nom : ");
        scanf("%s", contacts[nbrcontacts].nom);
        printf("Entrez le numero de telephone : ");
        scanf("%s", contacts[nbrcontacts].telephone);
        printf("Entrez l adresse email : ");
        scanf("%s", contacts[nbrcontacts].email);
        nbrcontacts++;
        printf("Contact est ajoute\n");
    } else {
        printf("impossible ajoute!\n");
    }
}

// void modifierContact(char nom[]){
//      for(int i = 0; i < nbrcontacts; i++){
//         if (strcmp(contacts[i].nom, nom) == 0) {
//             printf("Veuillez saisir la nouvelle numéro : ");
//             scanf("%s", contacts[nbrcontacts].telephone);
//             printf("Veuillez saisir la nouvelle email : ");
//             scanf("%s", contacts[nbrcontacts].email);
//             return;
//         }
//       }
//   printf("Contact existe pas");
// }


int rechercherContact(char nom[]) {
    for (int i = 0; i < nbrcontacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            return i;
        }
    }
    return -1;
}

void modifiercontact() {
    char nom[50];
    printf("Entrez le nom du contact modifier : ");
    scanf("%s", nom);
    int i = rechercherContact(nom);
    if (i != -1) {
        printf("Entrez le nouveau numero de telephone : ");
        scanf("%s", contacts[i].telephone);
        printf("Entrez la nouvelle adresse email : ");
        scanf("%s", contacts[i].email);
        printf("Contact est modifie\n");
    } else {
        printf("Contact existe pas\n");
    }
}

void supprimerContact(){

char nom[50];
    printf("Entrez le nom du contact a supprimer : ");
    scanf("%s", nom);
    int index = rechercherContact(nom);
    if (index != -1) {
        for (int i = index; i < nbrcontacts - 1; i++) {
             contacts[i] = contacts[i + 1];
        }
        nbrcontacts--;
        printf("Contact est supprime\n");
    } else {
        printf("Contact n existe pas\n");
    }

}


void afficherContact(){
  for(int i = 0; i < nbrcontacts; i++){
    printf("\nContacts :\nNom : %s\nTelephone: %s\nEmail : %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
  }
}


void rechercher(){
  char nom[50];
    printf("Entrez le nom du contact a rechercher : ");
    scanf("%s", nom);
      int i = rechercherContact(nom);
      if (i != -1) {
          printf("Nom : %s, Telephone : %s, Email : %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
      } else {
          printf("Contact existe pas\n");
      }
                
}



int main() {
    int choix;
    char nom[50];

    do {
    printf("1. Ajouter un contact\n");
    printf("2. Modifier un contact\n");
    printf("3. Supprimer un contact\n");
    printf("4. Afficher tous les contacts\n");
    printf("5. Rechercher un contact\n");
    printf("6. Quitter\n");
    printf("Entrez votre choix : ");
        scanf("%d", &choix);
    getchar();
        switch (choix) {
            case 1:
                ajoutContact();
                break;
            case 2:
                modifiercontact();
                break;
            case 3:
                supprimerContact();
                break;
            case 4:
                afficherContact();
                break;
            case 5:
                // printf("Entrez le nom du contact à rechercher : ");
                // scanf("%s", nom);
                // int i = rechercherContact(nom);
                // if (i != -1) {
                //     printf("Nom : %s, Telephone : %s, Email : %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
                // } else {
                //     printf("Contact existe pas\n");
                // }

                rechercher();
                break;
            case 6:
                printf("Au revoir !\n");
                return 0;
            default:
                printf("Choix invalide\n");
                 }
 } while (choix!=6);
return 0;
}

