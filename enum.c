#include <stdio.h>

/* Declare un type énumératif appelé statut         */
/* la valeur de STATUT_OK = 0, STATUT_GAGNE = 1 etc */
enum statut { STATUT_OK, STATUT_GAGNE, STATUT_EGALITE };

/* le retour de la fonction statut_jeu est un type énumératif statut */
static enum statut statut_jeu(struct position *pos, char jeton)
{
    if (grille_complete())
        return STATUT_EGALITE;
    else if (calcule_nb_jetons_depuis(pos, jeton) >= 4)
        return STATUT_GAGNE;

    return STATUT_OK;
}
                
