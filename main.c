// Fait par Eliot Tourtelier, Sofiane Charifi Alaoui et Maxime Maillary
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    char restart;
    do {
        int nombre_utilisateur;
        srand(time(NULL)); // Initialise le générateur de nombres aléatoires
        int random_number = rand() % 100 + 1; // Génère un nombre aléatoire entre 1 et 100

        printf("Vous avez le droit à 10 tentatives.\nChoisissez un nombre entre 1 et 100 : ");

        // Vérifie que l'entrée de l'utilisateur est bien un entier
        while (scanf("%d", &nombre_utilisateur) != 1) {
            printf("Entrée invalide.\nVeuillez saisir un nombre entier : ");
            int c;
            while ((c = getchar()) != '\n' && c != EOF); // Vide le buffer d'entrée
        }

        int count = 0; // Compteur de tentatives
        
        // Boucle principale du jeu : tant que l'utilisateur n'a pas trouvé le nombre
        while (nombre_utilisateur != random_number)
        {
            if (nombre_utilisateur < random_number)
            {
                count = count + 1; // Ajoute 1 au compteur à chaque tentative
                printf("C'est plus !\nRessayez (%d/10 tentatives) : ", count);
            }
            else if (nombre_utilisateur > random_number)
            {    
                count = count + 1;
                printf("C'est moins !\nRessayez (%d/10 tentative(s)): ", count);
            }
            // Vérifie à nouveau que l'entrée est un entier
            while (scanf("%d", &nombre_utilisateur) != 1) {
                printf("Entrée invalide.\nVeuillez saisir un nombre entier : ");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }

            // Si 10 tentatives ont été faites sans succès, le jeu s'arrête
            if(count == 9)
            {
                printf("Vous n'avez pas réussi à trouver le nombre en 10 tentatives.\nLe nombre à trouver était : %d\n", random_number);
                exit(0);
            }
        }
        
        // Si l'utilisateur trouve le nombre de premier coup ce message s'affiche
        if(count == 0)
        {
            printf("Félicitations tu as trouvé du premier coup !\n");
        }
        else // Sinon, ce message s'affiche
        {
            count = count + 1;
            printf("Gagné ! (%d tentatives)\n", count);
        }

        printf("Voulez-vous rejouer ? (y/n) : ");

        // Vide le buffer d'entrée avant de lire la réponse
        int choice;
        while ((choice = getchar()) != '\n' && choice != EOF);
        restart = getchar();

        // Vide à nouveau le buffer pour éviter les problèmes lors de la prochaine boucle
        while ((choice = getchar()) != '\n' && choice != EOF);

    } while (restart == 'y' || restart == 'Y'); // Relance le jeu si l'utilisateur veut rejouer

    exit(0);
}
