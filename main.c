#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variables
    char mot[] = "LOUP";
    int points_de_vie = 10;
    int mot_trouve = 0;


        //init jeu
        while(points_de_vie > 0 && !mot_trouve)
        {
        char proposition_lettre_joueur;
        char* p_lettre_joueur;


        //question aux joueurs et scan de sa reponse
            printf("Proposez une lettre: _\n");
            scanf(" %c", &proposition_lettre_joueur);

            p_lettre_joueur = strchr(mot, proposition_lettre_joueur);

            if(p_lettre_joueur != NULL)
            {
                printf("la lettre %c est pas presente dans le mot\n", proposition_lettre_joueur);
            }
            else
                {
                printf("la lettre %c n'est pas presente dans le mot\n", proposition_lettre_joueur);
                points_de_vie--;
                printf("Point de vie: %d\n", points_de_vie);
                }
             // Vérification si le mot est trouvé
            mot_trouve = 1;
            for(int i = 0; i < strlen(mot); i++)
            {
                if(mot[i] != '\0')
                {
                    mot_trouve = 0;
                    break;
                }
            }
        }


        if(mot_trouve)
        {
            printf("Bien joué ! Vous avez trouvé le mot.\n");
        }
        else
        {
            printf("Vous avez perdu tous vos points de vie. Le mot était %s.\n", mot);
        }

        return 0;
    }
