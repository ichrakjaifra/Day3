#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};


float calculAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &rect.longueur);
    
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &rect.largeur);

    printf("L'aire du rectangle est : %.2f\n", calculAire(rect));
    
    return 0;
}
