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
        printf("affichage train\n");
        while (tmp!=NULL)
            {
            printf("Num : %d\n",tmp->wagon.num);
            printf("Type: %s\n",tmp->wagon.type);
            printf("Etat:   %d\n",tmp->wagon.etat);
            printf("***-------*****\n");

            tmp=tmp->suivant;
            }
    }
}
listeChainee ajouter_Fin(listeChainee l, Wagon wagon)

{

struct Cellule * nouv, *parc;

nouv = (struct Cellule*) malloc(sizeof(struct Cellule));

nouv->wagon=wagon;

nouv->suivant=NULL;

if(l==NULL)

{

l=nouv;

}

else

{

parc=l;

while(parc->suivant!=NULL)

parc=parc->suivant;

parc->suivant = nouv;

}

return(l);
}

int chercher_wagon(listeChainee l,int num_wagon)
{
    struct Cellule* tmp=l;
    int exist =0;
    if(l==NULL)
    {
         printf("la liste est vide\n");

    }



    else

    {

        while (tmp!=NULL)
            {
                if(tmp->wagon.num==num_wagon)
                {
            printf("Num : %d\n",tmp->wagon.num);
            printf("Type: %s\n",tmp->wagon.type);
            printf("Etat:   %d\n",tmp->wagon.etat);
            printf("***-------*****\n");
            exist=1;
            break;

                }

            tmp=tmp->suivant;
            }
    }
    return exist;
}
