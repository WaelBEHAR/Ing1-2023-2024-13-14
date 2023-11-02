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
