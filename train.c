#include "train.h"
listeChainee ajouter_locomotive()
{

    struct Cellule* nouv = (struct Cellule*) malloc(sizeof(struct Cellule));
   // create wagon
    Wagon wagon;
    wagon.num =0;
    strcpy(wagon.type,"locomotive");
    wagon.etat=1;

    nouv->wagon=wagon;
    nouv->suivant=NULL;
    return nouv;
}


void parcourir(listeChainee l)
{
    struct Cellule* tmp=l;
    if(l==NULL)

        printf("la liste est vide\n");

    else

    {
        while (tmp!=NULL)
            {
            printf("Num : %d\n",tmp->wagon.num);
            printf("Type: %s\n",tmp->wagon.type);
            printf("Etat:   %d\n",tmp->wagon.etat);

            tmp=tmp->suivant;
            }
    }
}
