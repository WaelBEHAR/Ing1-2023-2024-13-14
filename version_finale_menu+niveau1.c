#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>
#include <time.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"

int main() {
    int menu;
    char mot_de_passse[20];
    int lignes = 12;
    int colonnes = 22;
    int plateau[12][22];

    int oiseau = 9;
    int PersoX = 10;
    int PersoY = 6;
    int oiseauX1 = 1, oiseauY1 = 1;
    int oiseauX2 = 20, oiseauY2 = 1;
    int oiseauX3 = 1, oiseauY3 = 10;
    int oiseauX4 = 20, oiseauY4 = 10;
    int block1 = 10, casse1 = 13;
    int block2 = 9, casse2 = 13;
    int block3 = 8, casse3 = 13;
    int block4 = 7, casse4 = 13;
    int block5 = 6, casse5 = 13;
    int block6 = 1, casse6 = 17;
    int block7 = 2, casse7 = 17;
    int block8 = 3, casse8 = 17;
    int block9 = 4, casse9 = 17;
    int block10 = 5, casse10 = 17;
    int block11 = 6, casse11 = 17;
    int block12 = 7, casse12 = 17;
    int block13 = 1, casse13 = 6;
    int block14 = 2, casse14 = 6;
    int block15 = 3, casse15 = 6;
    int block16 = 5, casse16 = 6;
    int block17 = 6, casse17 = 6;
    int block18 = 6, casse18 = 5;
    int block19 = 6, casse19 = 4;
    int block20 = 6, casse20 = 3;
    int block21 = 6, casse21 = 2;
    int block22 = 6, casse22 = 1;
    int x = 0;
    int Total_oiseau = 0, vie = 3;
    time_t start_time, current_time;  // Ajout de variables pour le minuteur
    int temps = 120;

    while (1) {
        system("cls");

        printf(ANSI_COLOR_CYAN "Menu du Jeu\n");

        printf("1. Règles du jeu\n");

        printf("2. Lancer un nouveau jeu à partir du niveau 1\n");

        printf("3. Charger une partie\n");

        printf("4. Mot de passe\n");

        printf("5. Scores\n");

        printf("6. Quitter\n");

        printf("Indiquez votre choix : ");

        scanf_s("%d", &menu);
        switch (menu) {

            case 1:

                system("cls");
                printf(ANSI_COLOR_MAGENTA"Voici les regles du jeu :\n\n - L objectif est de sauver les quatre oiseaux aux quatre coins de l ecran,\n"
                       "pour cela, il faut que Snoopy les recupere en passant sur la case ou ils se situent\n"
                       " - Pour realiser cette mission, vous disposez de 120 secondes\n"
                       " - Vous devez egalement faire attention aux differents obstacles qui peuvent vous tuer:\n"
                       "   1- Une balle se deplace aleatoirement, et vous devez l eviter pour survivre\n"
                       "   2- %c est votre personnage\n"
                       "   3- %c est un bloc incassable\n"
                       "   4- %c est un bloc piege ATTENTION!\n"
                       " - Vous disposez de 3 vies\n ", 0x1, 0x5, 0x6);
                sleep(10);
                break;

            case 2:

                // Initialisation de la grille
                for (int i = 0; i < lignes; i++) {
                    for (int j = 0; j < colonnes; j++) {
                        if (i == 0 || i == lignes - 1 || j == 0 || j == colonnes - 1) {
                            plateau[i][j] = '*';
                        } else if (i == block1 && j == casse1) {
                            plateau[i][j] = 5;
                        } else if (i == block2 && j == casse2) {
                            plateau[i][j] = 5;
                        } else if (i == block3 && j == casse3) {
                            plateau[i][j] = 5;
                        } else if (i == block4 && j == casse4) {
                            plateau[i][j] = 5;
                        } else if (i == block5 && j == casse5) {
                            plateau[i][j] = 5;
                        } else if (i == block6 && j == casse6) {
                            plateau[i][j] = 5;
                        } else if (i == block7 && j == casse7) {
                            plateau[i][j] = 5;
                        } else if (i == block8 && j == casse8) {
                            plateau[i][j] = 5;
                        } else if (i == block9 && j == casse9) {
                            plateau[i][j] = 5;
                        } else if (i == block10 && j == casse10) {
                            plateau[i][j] = 5;
                        } else if (i == block11 && j == casse11) {
                            plateau[i][j] = 5;
                        } else if (i == block12 && j == casse12) {
                            plateau[i][j] = 5;
                        } else if (i == block13 && j == casse13) {
                            plateau[i][j] = 5;
                        } else if (i == block14 && j == casse14) {
                            plateau[i][j] = 5;
                        } else if (i == block15 && j == casse15) {
                            plateau[i][j] = 5;
                        } else if (i == block16 && j == casse16) {
                            plateau[i][j] = 5;
                        } else if (i == block17 && j == casse17) {
                            plateau[i][j] = 5;
                        } else if (i == block18 && j == casse18) {
                            plateau[i][j] = 5;
                        } else if (i == block19 && j == casse19) {
                            plateau[i][j] = 5;
                        } else if (i == block20 && j == casse20) {
                            plateau[i][j] = 5;
                        } else if (i == block21 && j == casse21) {
                            plateau[i][j] = 5;
                        } else if (i == block22 && j == casse22) {
                            plateau[i][j] = 5;
                        } else if (i == PersoY && j == PersoX) {
                            plateau[i][j] = 8;
                        } else if (i == oiseauY1 && j == oiseauX1) {
                            plateau[i][j] = 9;
                        } else if (i == oiseauY2 && j == oiseauX2) {
                            plateau[i][j] = 9;
                        } else if (i == oiseauY3 && j == oiseauX3) {
                            plateau[i][j] = 9;
                        } else if (i == oiseauY4 && j == oiseauX4) {
                            plateau[i][j] = 9;
                        } else {
                            plateau[i][j] = 0;
                        }
                    }
                }

                // Initialisation du minuteur
                start_time = time(NULL);

                while (vie != 0 && temps > 0) {
                    system("cls");

                    // Affichage de la grille
                    for (int i = 0; i < lignes; i++) {
                        for (int j = 0; j < colonnes; j++) {
                            if (plateau[i][j] == 0) {
                                printf(" ");
                            } else if (plateau[i][j] == 1) {

                            } else if (plateau[i][j] == 2) {

                            } else if (plateau[i][j] == 3) {

                            } else if (plateau[i][j] == 4) {

                            } else if (plateau[i][j] == 5) {
                                printf("%c", 0x5);
                            } else if (plateau[i][j] == 6) {

                            } else if (plateau[i][j] == 7) {
                                printf("");
                            } else if (plateau[i][j] == 8) {
                                printf("%c", 0x1);
                            } else if (plateau[i][j] == 9) {
                                printf("%c", 0x4);
                            } else {
                                printf("%c", plateau[i][j]);
                            }
                        }
                        printf(ANSI_COLOR_RED "\n");
                    }

                    // Affichage du temps restant
                    printf("Il reste %d secondes\n", temps);

                    char move = _getch();
                    switch (move) {
                        case 'z':
                            if (PersoY > 1 & plateau[PersoY - 1][PersoX] != 5) {
                                plateau[PersoY][PersoX] = 0;
                                PersoY--;
                                plateau[PersoY][PersoX] = 8;
                            }
                            break;
                        case 's':
                            if (PersoY < lignes - 2 & plateau[PersoY + 1][PersoX] != 5) {
                                plateau[PersoY][PersoX] = 0;
                                PersoY++;
                                plateau[PersoY][PersoX] = 8;
                            }
                            break;
                        case 'q':
                            if (PersoX > 1 & plateau[PersoY][PersoX - 2] != 5) {
                                plateau[PersoY][PersoX] = 0;
                                PersoX--;
                                plateau[PersoY][PersoX] = 8;
                            }
                            break;
                        case 'd':
                            if (PersoX < colonnes - 2 & plateau[PersoY][PersoX + 2] != 5) {
                                plateau[PersoY][PersoX] = 0;
                                PersoX++;
                                plateau[PersoY][PersoX] = 8;
                            }
                            break;
                        case 'a':
                            return 0;
                    }

                    if (PersoX == oiseauX1 && PersoY == oiseauY1) {
                        Total_oiseau = Total_oiseau + 1;
                    } else if (PersoX == oiseauX2 && PersoY == oiseauY2) {
                        Total_oiseau = Total_oiseau + 1;
                    } else if (PersoX == oiseauX3 && PersoY == oiseauY3) {
                        Total_oiseau = Total_oiseau + 1;
                    } else if (PersoX == oiseauX4 && PersoY == oiseauY4) {
                        Total_oiseau = Total_oiseau + 1;
                    }
                    if (Total_oiseau == 4) {
                        system("cls");
                        printf("Felicitations ! Vous avez collecte tous les objets. Vous avez gagne !\n");
                        sleep(5);
                        printf("Lancement du prochain niveau\n");
                        sleep(5);
                    }

                    // Mise à jour du minuteur
                    current_time = time(NULL);
                    temps = 120 - (int) (current_time - start_time);

                    if (temps <= 0) {
                        vie = vie - 1;
                        system("cls");
                        printf("Temps ecoule. Nombre de vies restantes : %d.\n", vie);
                        sleep(5);
                    }
                }
                break;

            case 3:

                printf("Chargement d une partie...\n");
                break;

            case 4:

                printf("Entrez le mot de passe : ");

                scanf("%s", &mot_de_passse);

                if (strcmp(mot_de_passse, "jeu1") == 0) {

                    printf("Lancement du niveau 1:\n");

                    // Code du niveau 1

                } else if (strcmp(mot_de_passse, "jeu2") == 0) {

                    printf("Lancement du niveau 2:\n");

                    // Code du niveau 2

                } else if (strcmp(mot_de_passse, "jeu3") == 0) {

                    printf("Lancement du niveau 3:\n");

                    // Code du niveau 3

                } else {

                    printf("Mot de passe incorrect, retour au menu");

                }
                return 0;
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
