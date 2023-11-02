#include <stdio.h>

int main() {
    int m[10][20];

    // Initialiser la matrice avec des zéros
    for (int plateau = 0; plateau < 10; plateau++) {
        for (int wael = 0; wael < 20; wael++) {
            m[plateau][wael] = 0;
        }
    }

    // Mettre le chiffre 9 aux coins de la matrice
   m[0][0] = 9;
    m[0][19] = 9;
    m[9][0] = 9;
    m[9][19] = 9;
    m[0][2]=4;
    m[1][2]=4;
    m[2][2]=4;
    m[3][2]=1;
    m[4][2]=4;
    m[5][2]=4;
    m[6][2]=3;
    m[7][2]=2;
    m[8][2]=1;
    m[9][2]=4;
    m[0][17]=4;
    m[1][17]=4;
    m[2][17]=4;
    m[3][17]=4;
    m[4][17]=1;
    m[5][17]=3;
    m[6][17]=4;
    m[7][17]=4;
    m[8][17]=4;
    m[9][17]=4;
    m[1][4]=4;
    m[4][4]=3;
    m[8][6]= 4;
    m[2][8]=4;
    m[3][8]=4;
    m[4][8]=1;
    m[5][8]=4;
    m[6][8]=4;
    m[2][12]=4;
    m[3][12]=4;
    m[4][12]=4;
    m[5][12]=4;
    m[6][12]=4;
    m[1][9]=4;
    m[7][11]=4;
    m[4][10]=8;
    m[8][13]=1;
    m[0][14]=3;
    m[2][14]=4;
    m[6][14]=4;



    // Afficher la matrice
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (m[i][j]) {
                printf(" %d ", m[i][j]);
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
