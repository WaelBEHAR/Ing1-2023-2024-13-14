#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int lignes = 12;
int colonnes = 22;
int matrix[12][22];

int playerX = 10;
int playerY = 6;
int Xoiseau1 = 1, Yoiseau1 = 1;
int Xoiseau2 = 20, Yoiseau2 = 1;
int Xoiseau3 = 1, Yoiseau3 = 10;
int Xoiseau4 = 20, Yoiseau4 = 10;
int Noiseau = 0;
int gameTime = 120;  // Temps total de jeu en secondes

void initializeGrid() {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (i == 0 || i == lignes - 1 || j == 0 || j == colonnes - 1) {
                matrix[i][j] = '*';
            } else if (i == playerY && j == playerX){
                matrix[i][j] = 8;
            } else if (i == Yoiseau1 && j == Xoiseau1){
                matrix[i][j] = 9;
            } else if (i == Yoiseau2 && j == Xoiseau2){
                matrix[i][j] = 9;
            } else if (i == Yoiseau3 && j == Xoiseau3){
                matrix[i][j] = 9;
            } else if (i == Yoiseau4 && j == Xoiseau4){
                matrix[i][j] = 9;
            } else {
                matrix[i][j] = 0 ;
            }
        }
    }
}

void drawGrid(int remainingTime) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (matrix[i][j] == 0){
                printf(" ");
            } else if (matrix[i][j] == 1){

            } else if (matrix[i][j] == 2){

            } else if (matrix[i][j] == 3){

            } else if (matrix[i][j] == 4){

            } else if (matrix[i][j] == 5){

            } else if (matrix[i][j] == 6){

            } else if (matrix[i][j] == 7){
                printf("o");
            } else if (matrix[i][j] == 8){
                printf("+");
            } else if (matrix[i][j] == 9){
                printf("%c", 0x4);
            } else {
                printf("%c", matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("Time remaining: %d seconds\n", remainingTime);
}

void initializeGame() {
    initializeGrid();
}

int isTimeUp(time_t startTime) {
    time_t currentTime = time(NULL);
    int elapsedSeconds = (int)difftime(currentTime, startTime);
    return elapsedSeconds >= gameTime;
}

int main() {
    initializeGame();
    time_t startTime = time(NULL);  // Enregistrez l'heure de début du jeu

    while (1) {
        system("cls");

        int remainingTime = gameTime - (int)difftime(time(NULL), startTime);
        if (remainingTime < 0) {
            remainingTime = 0;
        }

        drawGrid(remainingTime);

        char move = _getch();

        switch (move) {
            case 'z':
                if (playerY > 1) {
                    matrix[playerY][playerX] = 0;
                    playerY--;
                    matrix[playerY][playerX] = 8;
                }
                break;
            case 's':
                if (playerY < lignes - 2) {
                    matrix[playerY][playerX] = 0;
                    playerY++;
                    matrix[playerY][playerX] = 8;
                }
                break;
            case 'q':
                if (playerX > 1) {
                    matrix[playerY][playerX] = 0;
                    playerX--;
                    matrix[playerY][playerX] = 8;
                }
                break;
            case 'd':
                if (playerX < colonnes - 2) {
                    matrix[playerY][playerX] = 0;
                    playerX++;
                    matrix[playerY][playerX] = 8;
                }
                break;
            case 'a':
                return 0;
        }

        if (playerX == Xoiseau1 && playerY == Yoiseau1) {
            Noiseau++;
            Xoiseau1 = -1;  // Oiseau collecté, le déplacer hors de l'écran
        } else if (playerX == Xoiseau2 && playerY == Yoiseau2) {
            Noiseau++;
            Xoiseau2 = -1;
        } else if (playerX == Xoiseau3 && playerY == Yoiseau3) {
            Noiseau++;
            Xoiseau3 = -1;
        } else if (playerX == Xoiseau4 && playerY == Yoiseau4) {
            Noiseau++;
            Xoiseau4 = -1;
        }

        if (Noiseau == 4) {
            system("cls");
            printf("Félicitations ! Vous avez collecté tous les objets. Vous avez gagné !\n");
            break;
        }

        if (isTimeUp(startTime)) {
            system("cls");
            printf("Temps écoulé. Game over.\n");
            break;
        }
    }
    return 0;
}
