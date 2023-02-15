#include <stdio.h>
#include <stdlib.h>
#include "train.h"
int main()
{

    listeChainee liste = NULL; // déclaration et initialisation de la liste
    parcourir(liste);
    liste= ajouter_locomotive();
    parcourir(liste);
    return 0;
}
