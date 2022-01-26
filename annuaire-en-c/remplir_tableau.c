#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "remplir_tableau.h"

#define min(a,b) (a<=b?a:b) // cherche l'indice le plus proche "\n" ou ","

char *strsep(char **stringp, const char *delim) {
    char *rv = *stringp;
    if (rv) {
        *stringp += min(strcspn(*stringp, delim),strcspn(*stringp, "\n"));
        *stringp += strcspn(*stringp, delim);
        if (**stringp)
            *(*stringp)++ = '\0';
        else
            *stringp = 0; }
    return rv;
}

client valeurStructure(char *str, client c)
{
    char *s1;
    char *s2;
    int count =1 ;

    s2 = str;
    s2 = strsep( &s2, "\n" );

    while (s2!=0 )
    {
            s1 = strsep( &s2, "," );

            switch (count)
            {
                case 1:
                    strcpy(c.nom ,s1);
                    break;
                case 2:
                    strcpy(c.prenom ,s1);
                    break;
                case 3:
                    strcpy(c.ville ,s1);
                    break;
                case 4:
                    strcpy(c.cp ,s1);
                    break;
                case 5:
                    strcpy(c.tel ,s1);
                    break;
                case 6:
                    strcpy(c.metier ,s1);
                    break;
                default:
                    perror("");
            }
            count +=1;
    }

    return c;
}

int remplirTableau(client *tab, int T)
{


    FILE *fp = fopen("clients.txt", "r");

    int sizebuffer=50+50+50+50+50+50, count=0;
    char buffer[sizebuffer];

    while(fgets(buffer, sizebuffer, fp))
    {
        tab[count] = valeurStructure(buffer,tab[count]);
        count++;
        if (count>T-1)
        {
            fclose(fp);
        }
    }

    return 0;
}
