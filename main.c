#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
#include <time.h>





void main() {
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
    void calculerScore();
    void calculerScore1();
    void calculerScore2();


    void N1();
    void N2();
    void N3();
    int choix;
    int menu;
    char password[10];



            printf( "BIENVENUE DANS L'EXPEREIENCE SNOOPY!!!\n\n");
            printf("@@@@@@@@@@@@@@@@@@@@@@&#5J??J5#@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@@@&G7.      :75&@@@@@@\n"
                   "@@@@@@@@@@@&BG5555Y7^            ^G@@@@@\n"
                   "@@@@@@@@@B?:                    : :B@@@@\n"
                   "@@@@@@@&J.         ~P       ..!P5G!?@@@@\n"
                   "@@@@@@@J           .7.     :7JBG#BG^#@@@\n"
                   "@@@@BYB^                   J7#GB##B^B@@@\n"
                   "@@@P^JB!              .?. :YJ&####7?&@@@\n"
                   "@@@#G&&#?:           :~^  .Y7&##B77&@@@@\n"
                   "@@@@@@@@@&G5J?7!~~~^^:   ~Y#?JYJJG@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@&BY. .P@@@@##&@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@@@@P?5@@@@@@@@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@@@B!:7@@@@@@@@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@@Y:   P@@@@@@@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@J   ...P@@@@@@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@B.   7^ ~#@@@@@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@B    J. ~G&@@@@@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@&J:. J!^!5&B#&&@@@@@@@@\n"
                   "@@@@@@@@@@@@@@@@@@@&G77?!G@&5?7?G@@@@@@@\n"
                   "@@@@@@@@@@@@&B5JP5YYY^7! J##&@@@@@@@@@@@\n"
                   "@@@@@@@@@@@&?!!J!^.: ...  .:~P@@@@@@@@@@\n"
                   "@@@@@@@@@@@@##&#BGGBPPGGGGG##&@@@@@@@@@@\n");
            sleep(2);



    while (1) {
        system("cls");

        printf(ANSI_COLOR_CYAN "Menu du Jeu\n");



            printf("1. Regles du jeu\n");

            printf("2. Lancer un nouveau jeu a partir du niveau 1\n");

            printf("3. Charger une partie\n");

            printf("4. Mot de passe\n");

            printf("5. Scores\n");

            printf("6. Quitter\n");


            printf("Indiquez votre choix : ");

            scanf("%d", &menu);

            switch (menu) {

                case 1:

                    system("cls");
                    printf(ANSI_COLOR_MAGENTA"Voici les regles du jeu :\n\n - L objectif est de sauver les quatre oiseaux aux quatre coins de l ecran,\n"
                           "pour cela, il faut que Snoopy les recupere en passant sur la case ou ils se situent\n"
                           " - Pour realiser cette mission, vous disposez de 120 secondes\n"
                           " - Pour se deplacer il faut utiliser les touches Z,Q,S,D\n"
                           " - Vous devez egalement faire attention aux differents obstacles qui peuvent vous tuer:\n"
                           "   1- Une balle peut se deplacer aleatoirement, et vous devez l eviter pour survivre\n"
                           "   2- %c est votre personnage\n"
                           "   3- %c est un bloc incassable\n"
                           "   4- %c est un bloc piege ATTENTION!\n"
                           "   - Pour sauvegarder votre partie vous devez appuyez sur la touche k\n"
                           "   - Pour charger votre derniere sauvegarde vous devez appuer sur la touche n\n"
                           "   - Pour faire pause vous devez appuyer sur la touche p\n"
                           " - Vous disposez de 3 vies\n ", 0x1, 0x5, 0x6);
                    sleep(15);


                case 2: {
                    N1();



                }


                case 3:


                    printf("a quelle niveau voulez vous jouer? \n");
                    scanf("%d",&choix);
                    if (choix == 1){
                        N1();
                    }
                    else if (choix == 2){
                        N2();
                    } else if (choix == 3){
                        N3();
                    }

                    sleep(5);
                    break;

                case 4:
                    printf("Entrez le mot de passe : ");
                    scanf("%s", password);

                    if (strcmp(password, "N1") == 0) {
                        N1();
                    } else if (strcmp(password, "N2") == 0) {
                        N2();
                    } else if (strcmp(password, "N3") == 0) {
                        N3();
                    } else {
                        printf("Mot de passe incorrect.\n");
                    }
                    sleep(5);
                    break;

                case 5:
                    printf("Calcul du score en cours...\n");
                    int temps_ecoule = 60; // Remplacez ces valeurs par les valeurs appropriées
                    int temps_restant = 60; // Temps écoulé et temps restant pour l'exemple
                    calculerScore(temps_ecoule, temps_restant); // Appel de la fonction calculerScore
                    sleep(3);
                    break;




                case 6 :
                    printf("merci d avoir jouer a notre jeu\n");
                    sleep(2);
                    printf(ANSI_COLOR_RED"Les fondateurs sont Adam,Wael,Ines,Gaetane\n\t");
                    sleep(5);
                    break;


                case 7 :
                    N2();


                case 8 :
                    N3();

            }


        }
    }
