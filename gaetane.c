#include <conio.h>
#include <stdio.h>

int main() {
    int row = 5; // Position initiale de la ligne pour le point
    int col = 10; // Position initiale de la colonne pour le point

    while (1) {
        system("cls"); // Efface l'écran (Windows-specific)

        // Affiche la matrice avec le point à la position actuelle
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 20; j++) {
                if (i == row && j == col) {
                    printf("P "); // Affiche le point ('P')
                } else {
                    printf(". "); // Affiche un point
                }
            }
            printf("\n");
        }

        int ch = _getch(); // Attend l'entrée de l'utilisateur

        // Déplacement en fonction de la touche appuyée
        switch (ch) {
            case 72: // Flèche du haut
                if (row > 0) row--;
                break;
            case 80: // Flèche du bas
                if (row < 9) row++;
                break;
            case 75: // Flèche de gauche
                if (col > 0) col--;
                break;
            case 77: // Flèche de droite
                if (col < 19) col++;
                break;
            case 'q':
                return 0; // Quitte le programme si 'q' est pressé
            default:
                break;
        }
    }

    return 0;
}
