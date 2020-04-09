#include <stdio.h>

struct nombre
{
    unsigned entier : 1;
    unsigned flottant : 1;
    union
    {
        int e;
        double f;
    } u;
};


static void affiche_nombre(struct nombre n)
{
    if (n.entier)
        printf("%d\n", n.u.e);
    else if (n.flottant)
        printf("%f\n", n.u.f);
}


int main(void)
{
    struct nombre a = { 0 };
    struct nombre b = { 0 };

    a.entier = 1;
    a.u.e = 10;
    b.flottant = 1;
    b.u.f = 10.56;

    affiche_nombre(a);
    affiche_nombre(b);
    return 0;
}
