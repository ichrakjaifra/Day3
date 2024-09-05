struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne personne;

    printf("Entrez le nom : ");
    scanf("%s", personne.nom);
    
    printf("Entrez le prenom : ");
    scanf("%s", personne.prenom);
    
    printf("Entrez l'age : ");
    scanf("%d", &personne.age);

    printf("\nInformations :\nNom : %s\nPrenom : %s\nAge : %d\n", personne.nom, personne.prenom, personne.age);
    
    return 0;
}
