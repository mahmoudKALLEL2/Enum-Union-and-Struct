#include <stdio.h>

struct nombre
{
    unsigned entier : 1;
    unsigned flottant : 1;
    union
    {
        int e;
        double f;
    };
};


static void affiche_nombre(struct nombre n)
{
    if (n.entier)
        printf("%d\n", n.e);
    else if (n.flottant)
        printf("%f\n", n.f);
}


int main(void)
{
    struct nombre a = { 0 };
    struct nombre b = { 0 };

    a.entier = 1;
    a.e = 10;
    b.flottant = 1;
    b.f = 10.56;

    affiche_nombre(a);
    affiche_nombre(b);
    return 0;
}
