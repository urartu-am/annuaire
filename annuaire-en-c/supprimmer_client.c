#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "supprimmer_client.h"
#include "remplir_tableau.h"

void supprimerClient(client *tab, int T)
{
    // Déclaration des variables
    int j, a, c;

    // Saisie au clavier l'occ. du cl. à suppr.
    do{
    printf("Saisir l'indice d'occurence du client que vous souhaitez supprimmer : \n");
    printf(">> ");
    scanf("%d", &j);
        if(0>j || j>T)
        {
            printf(">> Erreur de saisie.\n");
        }
    }while(0>j || j>T);

    FILE *fp = fopen("clients.txt", "r");

    // Algorithme de suppression
    for(a=j;a<=T-2;a++)
    {
        strcpy(tab[a].nom, tab[a+1].nom);
        strcpy(tab[a].prenom, tab[a+1].prenom);
        strcpy(tab[a].ville, tab[a+1].ville);
        strcpy(tab[a].cp, tab[a+1].cp);
        strcpy(tab[a].tel, tab[a+1].tel);
        strcpy(tab[a].metier, tab[a+1].metier);
    }

    T = T - 1;

    fp = fopen("clients.txt", "w+");

    // Sauvegarde de la nouvelle base.
    for(c=0;c<T;c++){
            if(c==T-1)
            {
                fprintf(fp,"%s,%s,%s,%s,%s,%s", tab[c].nom, tab[c].prenom, tab[c].ville, tab[c].cp, tab[c].tel, tab[c].metier);
            }
            else
            {
                fprintf(fp,"%s,%s,%s,%s,%s,%s\n", tab[c].nom, tab[c].prenom, tab[c].ville, tab[c].cp, tab[c].tel, tab[c].metier);
            }
    }

    fclose(fp);

    printf(">> Client n %d supprime.\n", j);
    printf(">> La base contient desormais %d clients.\n", T);

}
