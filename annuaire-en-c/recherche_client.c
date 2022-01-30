#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include "recherche_client.h"

#define false 0
#define true 1

void rechercheClient(client *tab, int T)
{
    int val, mil, deb=0, trouve=false;
    int fin=T;

    printf("Saisir le numero du client : \n");
    printf(">> ");
    scanf("%d", &val);

    if(deb<=fin)
    {
       while(trouve!=true && deb<=fin)
       {
           mil = (deb+fin)/2;
           if(mil == val)
           {
               trouve = true;
           }
           else if(val>mil)
           {
               deb = mil+1;
           }
           else
           {
               fin = mil-1;
           }
       }
    }

    if(trouve==true)
    {
        printf("==============================\n");
        printf("No : %d\n", val);
        printf("Nom : %s\n", tab[val].nom);
        printf("Prenom : %s\n", tab[val].prenom);
        printf("Ville : %s\n", tab[val].ville);
        printf("CP : %s\n", tab[val].cp);
        printf("Telephone : %s\n", tab[val].tel);
        printf("Metier : %s\n", tab[val].metier);
        printf("==============================\n");
    }
    else
    {
        printf(">> Le client numero %d n'est pas dans le base.\n", val);
    }
}
