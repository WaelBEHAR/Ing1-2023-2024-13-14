//
// Created by adamf on 26/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
#include <time.h>
#include "Niveau2.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"

void N2(){
    int menu;
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
    int sauvegardeEnCours = 0;
    int Total_oiseau = 0, vie = 3;
    time_t start_time, current_time;  // Ajout de variables pour le minuteur
    int temps = 30;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (i == 0 || i == lignes - 1 || j == 0 || j == colonnes - 1) {
                plateau[i][j] = '*';
            } else if (i == block1 && j == casse1) {
                plateau[i][j] = 4;
            } else if (i == block2 && j == casse2) {
                plateau[i][j] = 4;
            } else if (i == block3 && j == casse3) {
                plateau[i][j] = 4;
            } else if (i == block4 && j == casse4) {
                plateau[i][j] = 4;
            } else if (i == block5 && j == casse5) {
                plateau[i][j] = 4;
            } else if (i == block6 && j == 13) {
                plateau[i][j] = 4;
            } else if (i == block7 && j == 13) {
                plateau[i][j] = 4;
            } else if (i == block8 && j == 13) {
                plateau[i][j] = 4;
            } else if (i == block9 && j == 13) {
                plateau[i][j] = 4;
            }else if ( i == 1 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 2 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 3 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 4 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 4 && j== 20 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 7 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 8 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 9 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if ( i == 10 && j== 18 ) {
                plateau[i][j] = 4 ; }
            else if (i == 7 && j == 20) {
                plateau[i][j] = 4;}
            else if (i == block11 && j == casse11) {
                plateau[i][j] = 4;
            } else if (i == block12 && j == casse12) {
                plateau[i][j] = 4;
            } else if (i == block13 && j == casse13) {
                plateau[i][j] = 4;
            } else if (i == block14 && j == casse14) {
                plateau[i][j] = 4;
            } else if (i == block15 && j == casse15) {
                plateau[i][j] = 4;
            } else if (i == block16 && j == casse16) {
                plateau[i][j] = 4;
            } else if (i == block17 && j == casse17) {
                plateau[i][j] = 4;
            } else if (i == block18 && j == casse18) {
                plateau[i][j] = 4;
            } else if (i == block19 && j == casse19) {
                plateau[i][j] = 4;
            } else if (i == block20 && j == casse20) {
                plateau[i][j] = 4;
            } else if (i == block21 && j == casse21) {
                plateau[i][j] = 4;
            } else if (i == block22 && j == casse22) {
                plateau[i][j] = 4;
            } else if (i == 6 && j == casse2){
                plateau[i][j] = 4;
            }
            else if (i == PersoY && j == PersoX) {
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
                    printf("%c", 0x5);


                } else if (plateau[i][j] == 5) {

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
                if (PersoY > 1 & plateau[PersoY - 1][PersoX] != 4) {
                    plateau[PersoY][PersoX] = 0;
                    PersoY--;
                    plateau[PersoY][PersoX] = 8;
                }
                break;
            case 's':
                if (PersoY < lignes - 2 & plateau[PersoY + 1][PersoX] != 4) {
                    plateau[PersoY][PersoX] = 0;
                    PersoY++;
                    plateau[PersoY][PersoX] = 8;
                }
                break;
            case 'q':
                if (PersoX > 1 & plateau[PersoY][PersoX - 1] != 4) {
                    plateau[PersoY][PersoX] = 0;
                    PersoX--;
                    plateau[PersoY][PersoX] = 8;
                }
                break;
            case 'd':
                if (PersoX < colonnes - 2 & plateau[PersoY][PersoX + 1] != 4) {
                    plateau[PersoY][PersoX] = 0;
                    PersoX++;
                    plateau[PersoY][PersoX] = 8;
                }
                break;

            case 'k':
                if (sauvegardeEnCours == 0) {
                    sauvegardeEnCours = 1; // Indique que la sauvegarde est en cours
                    printf("Sauvegarde en cours...\n");
                    sleep(1); // Ajout d'une pause pour l'effet visuel
                    printf("Veuillez patienter pendant la sauvegarde...\n");

                    FILE *fichier = fopen("Niveau2.txt", "w"); // Ouvre le fichier en mode écriture

                    if (fichier != NULL) {
                        fprintf(fichier, "%d %d\n", lignes, colonnes); // Écrit les dimensions du plateau

                        // Écrit les données du plateau dans le fichier
                        for (int i = 0; i < lignes; i++) {
                            for (int j = 0; j < colonnes; j++) {
                                fprintf(fichier, "%d ", plateau[i][j]);
                            }
                            fprintf(fichier, "\n");
                        }

                        fprintf(fichier, "%d\n", Total_oiseau); // Écrit le nombre total d'oiseaux
                        fprintf(fichier, "%d\n", vie); // Écrit le nombre de vies restantes

                        fclose(fichier); // Ferme le fichier
                        printf("Les informations du jeu ont ete sauvegardees dans le fichier 'Niveau2.txt'.\n");
                    } else {
                        printf("Erreur lors de l'ouverture du fichier pour la sauvegarde.\n");
                    }

                    sauvegardeEnCours = 0; // Indique que la sauvegarde est terminée
                    sleep(2);
                    printf("Sauvegarde terminée.\n");
                } else {
                    printf("Une sauvegarde est déjà en cours.\n");
                }
                break;



        }

        if (PersoX == oiseauX1 && PersoY == oiseauY1) {
            Total_oiseau = Total_oiseau + 1;
        } else if (PersoX == 20 && PersoY == 1) {
            Total_oiseau = Total_oiseau + 1;
        } else if (PersoX == 1 && PersoY == 10) {
            Total_oiseau = Total_oiseau + 1;
        } else if (PersoX == 20 && PersoY == 10) {
            Total_oiseau = Total_oiseau + 1;
        }
        if (Total_oiseau == 5) {

            printf("Felicitations ! Vous avez collecte tous les objets. Vous avez gagne !\n");
            sleep(3);
            system("cls");

            printf("Lancement du prochain niveau\n");
            sleep(3);
            break;
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


}

