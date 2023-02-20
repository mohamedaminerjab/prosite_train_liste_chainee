#include <stdio.h>
#include <stdlib.h>
#include "train.h"
int main()
{

    listeChainee liste = NULL; // déclaration et initialisation de la liste
   liste = ajouter_locomotive();

int choix;




  do{

            printf("\n*********  MENU  *********\n\n");
                printf("\t\ 1: Trouver wagon\n ");
                printf("\t\ 2: Ajouter wagon a la fin\n");
                printf("\t\ 3: afficher trrain\n");
                printf("\t\ 0: Quittez\n");
                printf("\n************************\n\n");
                printf("tapez votre choix:\n");
                scanf("%d",&choix);
                switch(choix)
                {

                    case 1:{
                       int num_wagon;
     printf( "printf donner le num du wagon a chercher\n");
     scanf("%d",&num_wagon);
     if
        (! chercher_wagon(liste,num_wagon))

        {
            printf("le wagon du nemuro %d n existe pas\n",num_wagon);
        }


                    break;}

                    case 2:{
                         Wagon wagon ;
    printf( "printf donner le num du wagon\n");
    scanf("%d",&wagon.num);
    printf("donner le type du wagon locomotive ou wagon\n");
    scanf("%s",&wagon.type);
    printf("donner l etat du wagon Etat 0 si en panne ou  1 si OK\n");
    scanf("%d",&wagon.etat);
    printf("fin saisie wagon\n");
    liste=ajouter_Fin(liste,wagon);


                    break;}

                    case 3 :
                    {
                         parcourir(liste);

                    }break;
                 case 0:{
                    break;}

                     default: printf("choix invalide\n");
                }

            }while(choix!=0);


    return 0;
}
