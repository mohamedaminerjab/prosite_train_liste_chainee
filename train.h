#ifndef TRAIN_H_INCLUDED
#define TRAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int num;
    char type[30];
    int etat; // 0 en panne ou 1 OK
    } Wagon;


struct Cellule
{
    Wagon wagon ; // Donnée
    struct Cellule * suivant ; // pointeur sur l’élément suivant
};
typedef struct Cellule * listeChainee;


listeChainee ajouter_locomotive();
void parcourir(listeChainee l);

#endif // TRAIN_H_INCLUDED


