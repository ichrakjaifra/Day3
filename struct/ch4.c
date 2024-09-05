#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point *p, point;

    p = &point;
    
    printf("Entrez la coordonne x : ");
    scanf("%d", &p->x);

    printf("Entrez la coordonne y : ");
    scanf("%d", &p->y);

    printf("Le point est (%d, %d)\n", p->x, p->y);

    return 0;
}
