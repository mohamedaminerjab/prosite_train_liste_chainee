#ifndef TRAIN_H_INCLUDED
#define TRAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int num;
    char type[30];
    int etat; // 0 en panne ou 1 OK

    } Wagon;

#endif // TRAIN_H_INCLUDED
