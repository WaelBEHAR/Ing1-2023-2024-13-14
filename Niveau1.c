#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

int lignes = 12;
int colonnes = 22;
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
int matrix[12][22];
int playerX = 10;
int playerY = 6;
int Xballe = 3, Yballe = 3, dirX = 1, dirY = 1;
int Xoiseau1 = 1, Yoiseau1 = 1;
int Xoiseau2 = 20, Yoiseau2 = 1;
int Xoiseau3 = 1, Yoiseau3 = 10;
int Xoiseau4 = 20, Yoiseau4 = 10;
int Noiseau = 0;
int gameTime = 120 ;  // Temps total de jeu en secondes

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
            }
            else if (i == block1 && j == casse1){
                matrix[i][j] = 5;
            }
            else if (i == block2 && j == casse2){
                matrix[i][j] = 5;
            }
            else if (i == block3 && j == casse3){
                matrix[i][j] = 5;
            }
            else if (i == block4 && j == casse4){
                matrix[i][j] = 5;
            }
            else if (i == block5 && j == casse5){
                matrix[i][j] = 5;
            }
            else if (i == block6 && j == casse6){
                matrix[i][j] = 5;
            }
            else if (i == block7 && j == casse7){
                matrix[i][j] = 5;
            }
            else if (i == block8 && j == casse8){
                matrix[i][j] = 5;
            }
            else if (i == block9 && j == casse9){
                matrix[i][j] = 5;
            }
            else if (i == block10 && j == casse10){
                matrix[i][j] = 5;
            }
            else if (i == block11 && j == casse11){
                matrix[i][j] = 5;
            }
            else if (i == block12 && j == casse12){
                matrix[i][j] = 5;
            }
            else if (i == block13 && j == casse13){
                matrix[i][j] = 5;
            }
            else if (i == block14 && j == casse14){
                matrix[i][j] = 5;
            }
            else if (i == block15 && j == casse15){
                matrix[i][j] = 5;
            }
            else if (i == block16 && j == casse16){
                matrix[i][j] = 5;
            }
            else if (i == block17 && j == casse17){
                matrix[i][j] = 5;
            }
            else if (i == block18 && j == casse18){
                matrix[i][j] = 5;
            }
            else if (i == block19 && j == casse19){
                matrix[i][j] = 5;
            }
            else if (i == block20 && j == casse20){
                matrix[i][j] = 5;
            }
            else if (i == block21 && j == casse21){
                matrix[i][j] = 5;
            }else if (i == block22 && j == casse22){
                matrix[i][j] = 5;
            }
            else {
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

            } else if (matrix[i][j] == 5)
            {
                    printf("%c",0x5);

            } else if (matrix[i][j] == 6){

            } else if (matrix[i][j] == 7){
                printf("o");
            } else if (matrix[i][j] == 8){
                printf("%c",0x1);
            } else if (matrix[i][j] == 9){
                printf("%c", 0x4);
            }
            else {
                printf("%c", matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("Time remaining: %d seconds\n", remainingTime);
}


void updateBallPosition() {
    matrix[Yballe][Xballe] = 0;

    Xballe += dirX;
    Yballe += dirY;

    matrix[Yballe][Xballe] = 7;

    if (Xballe <= 1 || Xballe >= colonnes - 2) {
        dirX = -dirX;
    }
    if (Yballe <= 1 || Yballe >= lignes - 2) {
        dirY = -dirY;
    }
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


    while (gameTime>0){
       while (1) {
           system("cls");

           int remainingTime = gameTime - (int)difftime(time(NULL), startTime);
           if (remainingTime < 0) {
               remainingTime = 0;
           }

           drawGrid(remainingTime);



           char obstacle = _getch();

           switch (obstacle) {
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
               printf("Felicitations ! Vous avez collecte tous les objets. Vous avez gagne !\n");
               break;
           }

           if (isTimeUp(startTime)) {
               system("cls");
               printf("Temps ecoule! Game over!\n");
               break;
           }
       }

        char end = _getch();
        switch (end) {
            case 'i':
                return 0;
        }



            while (gameTime > 0) {
                while (1) {
                    // ...

                    if (isTimeUp(startTime)) {
                        system("cls");
                        printf("Temps ecoule! Game over!\n");
                        sleep(5); // Attendre 10 secondes avant de quitter
                        break;
                    }
                }
            }
            
            




            return 0;
        }
    


         return 0;
        }





