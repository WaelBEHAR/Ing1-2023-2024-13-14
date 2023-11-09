#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"



int main() {

    int choix;
    char mdp[100];
    int lignes = 12;
    int colonnes = 22;
    int matrix[12][22];
    int snoopy = 8; //les plateaux seront stockés dans des fichiers txt, où chaque élément/caractère du décor = chiffre dans le fichier
    int oiseau = 9;



    int playerX = 10;
    int playerY = 6;

    int Xoiseau1 = 1, Yoiseau1 = 1;
    int Xoiseau2 = 20, Yoiseau2 = 1;
    int Xoiseau3 = 1, Yoiseau3 = 10;
    int Xoiseau4 = 20, Yoiseau4 = 10;
    int block1 = 10 , casse1 = 13;
    int block2 = 9 , casse2 = 13;
    int block3 = 8 , casse3 =13;
    int block4 = 7 , casse4 = 13;
    int block5 = 6 , casse5 = 13;
    int block6 = 1 , casse6 = 17;
    int block7 = 2 , casse7 = 17;
    int block8 = 3 , casse8 = 17;
    int block9 = 4 , casse9 = 17;
    int block10 = 5 , casse10 = 17;
    int block11 = 6 , casse11 = 17;
    int block12 = 7 , casse12 = 17;
    int block13 = 1 , casse13 = 6;
    int block14 = 2 , casse14 = 6;
    int block15 = 3 , casse15 = 6;
    int block16 = 5 , casse16 = 6;
    int block17 = 6 , casse17 = 6;
    int block18 = 6 , casse18 = 5;
    int block19 = 6 , casse19 = 4;
    int block20 = 6 , casse20 = 3;
    int block21 = 6 , casse21 = 2;
    int block22 = 6 , casse22 = 1;
    int x = 0;
    int Noiseau = 0, vie = 3;
    int t = 120;

    while (1) {
        system("cls");

        printf(ANSI_COLOR_CYAN "xMenu du Jeu\n");

        printf("1. regles du jeu\n");

        printf("2. lancer un nouveau Jeu a partir du niveau 1\n");

        printf("3. charger une partie\n");

        printf("4. mot de passe\n");

        printf("5. scores\n");

        printf("6. quitter\n");

        printf("indiquez votre choix: ");

        scanf_s("%d", &choix);




        switch (choix) {

            case 1:

                system("cls");
                printf(ANSI_COLOR_MAGENTA"Voici les regles du jeu :\n\n -l'objectif est de sauver les quatres oiseaux au quatre coins de l'ecran,\npour cela il faut que snoopy les recupere en passant sur la case ou ils se situent\n -pour realiser cette misson vous disposez de 120 secondes\n -vous devez egalement faire attention au differents obstacles qui peuvent vous tuer: \n1-une balle se deplace aleatoirement et vous devez l'eviter pour survivre\n 2-%c est votre personnage \n 3-%c est un bloc incasable\n4-%c est un bloc piege ATTENTION!\n-vous disposez de 3 vies\n ",0x1,0x5 ,0x6);
                sleep(10);
                break;

            case 2:

                //initialisation grille
                for (int i = 0; i < lignes; i++) {
                    for (int j = 0; j < colonnes; j++) {
                        if (i == 0 || i == lignes - 1 || j == 0 || j == colonnes - 1) {
                            matrix[i][j] = '"';
                        } else if (i == block1 && j == casse1){
                            matrix[i][j] = 5;
                        } else if (i == block2 && j == casse2){
                            matrix[i][j] = 5;
                        } else if (i == block3 && j == casse3){
                            matrix[i][j] = 5;
                        } else if (i == block4 && j == casse4){
                            matrix[i][j] = 5;
                        } else if (i == block5 && j == casse5){
                            matrix[i][j] = 5;
                        } else if (i == block6 && j == casse6){
                            matrix[i][j] = 5;
                        } else if (i == block7 && j == casse7){
                            matrix[i][j] = 5;
                        } else if (i == block8 && j == casse8){
                            matrix[i][j] = 5;
                        } else if (i == block9 && j == casse9){
                            matrix[i][j] = 5;
                        } else if (i == block10 && j == casse10){
                            matrix[i][j] = 5;
                        } else if (i == block11 && j == casse11){
                            matrix[i][j] = 5;
                        } else if (i == block12 && j == casse12){
                            matrix[i][j] = 5;
                        } else if (i == block13 && j == casse13){
                            matrix[i][j] = 5;
                        } else if (i == block14 && j == casse14){
                            matrix[i][j] = 5;
                        } else if (i == block15 && j == casse15){
                            matrix[i][j] = 5;
                        } else if (i == block16 && j == casse16){
                            matrix[i][j] = 5;
                        } else if (i == block17 && j == casse17){
                            matrix[i][j] = 5;
                        } else if (i == block18 && j == casse18){
                            matrix[i][j] = 5;
                        } else if (i == block19 && j == casse19){
                            matrix[i][j] = 5;
                        } else if (i == block20 && j == casse20){
                            matrix[i][j] = 5;
                        } else if (i == block21 && j == casse21){
                            matrix[i][j] = 5;
                        } else if (i == block22 && j == casse22){
                            matrix[i][j] = 5;
                        }  else if (i == playerY && j == playerX){
                            matrix[i][j] = 8;
                        } else if (i == Yoiseau1 && j == Xoiseau1){
                            matrix[i][j] = 9;
                        } else if (i == Yoiseau2 && j == Xoiseau2){
                            matrix[i][j] = 9;
                        } else if (i == Yoiseau3 && j == Xoiseau3){
                            matrix[i][j] = 9;
                        } else if (i == Yoiseau4 && j == Xoiseau4){
                            matrix[i][j] = 9;
                        }else {
                            matrix[i][j] = 0 ;
                        }
                    }
                }

                while (vie != 0) {
                    system("cls");  // Efface l'écran (Windows)

                    if (t > 80){
                        if (t % 2 == 0){
                            matrix[0][(123 - t)/2]='%';
                        }
                        else {
                            matrix[0][(122 - t)/2]='E' ;
                        }
                    } else if (t > 60){
                        if (t % 2 == 0){
                            matrix[(83 - t)/2][21]='%';
                        }
                        else {
                            matrix[(82 - t)/2][21]='E' ;
                        }
                    } else if (t > 20){
                        if (t % 2 == 0){
                            matrix[11][(t - 19)/2]='%';
                        }
                        else {
                            matrix[11][(t - 18)/2]='E' ;
                        }
                    } else {
                        if (t % 2 == 0) {
                            matrix[t / 2][0] = '%';
                        } else {
                            matrix[(t + 1)/ 2][0] = 'E';
                        }
                    }

                    t = t - 1;

                    for (int i = 0; i < lignes; i++) {
                        for (int j = 0; j < colonnes; j++) {
                            if (matrix[i][j] == 0){
                                printf(" ");
                            } else if (matrix[i][j] == 1){

                            } else if (matrix[i][j] == 2){

                            } else if (matrix[i][j] == 3){

                            } else if (matrix[i][j] == 4){

                            } else if (matrix[i][j] == 5){
                                printf("%c",0x5);
                            } else if (matrix[i][j] == 6){

                            } else if (matrix[i][j] == 7){
                                printf("");
                            } else if (matrix[i][j] == 8){
                                printf("%c",0x1);
                            } else if (matrix[i][j] == 9){
                                printf("%c",0x4);
                            } else {
                                printf("%c", matrix[i][j]);
                            }
                        }
                        printf(ANSI_COLOR_RED"\n");
                    }

                    printf("%d", t);

                    char move = _getch();

                    switch (move) {
                        case 'z':
                            if (playerY > 1 & matrix[playerY-1][playerX]!=5) {
                                matrix[playerY][playerX] = 0;
                                playerY--;
                                matrix[playerY][playerX] = 8;
                            }
                            break;
                        case 's':
                            if (playerY < lignes - 2 & matrix[playerY+1][playerX]!=5) {
                                matrix[playerY][playerX] = 0;
                                playerY++;
                                matrix[playerY][playerX] = 8;
                            }
                            break;
                        case 'q':
                            if (playerX > 1 & matrix[playerY][playerX-2]!=5) {
                                matrix[playerY][playerX] = 0;


                                playerX--;
                                matrix[playerY][playerX] = 8;
                            }
                            break;
                        case 'd':
                            if (playerX < colonnes - 2 & matrix[playerY][playerX+2]!=5) {
                                matrix[playerY][playerX] = 0;
                                playerX++;
                                matrix[playerY][playerX] = 8;
                            }
                            break;
                        case 'a':
                            return 0;
                    }






                    if (playerX == Xoiseau1 && playerY == Yoiseau1){
                        Noiseau = Noiseau + 1;
                    } else if (playerX == Xoiseau2 && playerY == Yoiseau2){
                        Noiseau = Noiseau + 1;
                    } else if (playerX == Xoiseau3 && playerY == Yoiseau3){
                        Noiseau = Noiseau + 1;
                    } else if (playerX == Xoiseau4 && playerY == Yoiseau4){
                        Noiseau = Noiseau + 1;
                    }
                    if (Noiseau == 4) {
                        system("cls");
                        printf("Felicitations ! Vous avez collecte tous les objets. Vous avez gagne !\n");
                        sleep(5);
                        printf("niveau 2 mtn\n");
                        sleep(5);
                    }
                    

                    if (t == 0) {
                        vie = vie -1;
                        system("cls");
                        printf("Temps ecoule. Nombre de vie restante : %d.\n", vie);
                        sleep(5);
                    }
                }
                break;

            case 3:

                printf("Chargement d'une partie...\n");




                break;

            case 4:

                printf("Entrez le mot de passe : ");

                scanf("%s", &mdp);




                if(strcmp(mdp,"jeu1")==0){

                    printf("lancement du niveau 1:\n");

                    //code du niveau 1




                }else if (strcmp(mdp,"jeu2")==0){

                    printf("lancement du niveau 2:\n");

                    //code du niveau 2




                }else if (strcmp(mdp,"jeu3")==0){

                    printf("lancement du niveau 3:\n");

                    //code niveau 3




                }else{

                    printf("mot de passe incorect, retrour au menu");




                }return 0;







                break;

            case 5:

                printf("Afficher le score: \n");




                break;

            case 6:

                printf("Fin du jeu.\n");

                return 0;

        }

    }

    return 0;

}
