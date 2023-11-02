/* #include <stdio.h>

for(int i = 0; i < n; i++) {
  for(int j = 0; j < m; j++)
    if(m[i][j])
      printf(" x ");
    else
      printf(" 0 ");
  printf("\n");
} */

#include <stdio.h>

int main() {
    int row = 5; // Position initiale de la ligne pour le point
    int col = 10; // Position initiale de la colonne pour le point

    while (1) {
        printf("\033[H\033[J"); // Efface l'écran (peut ne pas fonctionner sur tous les systèmes)

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

        int ch = getchar(); // Attend l'entrée de l'utilisateur

        // Déplacement en fonction de la touche appuyée
        if (ch == 27) { // Vérifie si une séquence d'échappement est en cours
            getchar(); // Ignore le caractère '['
            ch = getchar(); // Lit le code de la touche
            switch (ch) {
                case 'A': // Flèche du haut
                    if (row > 0) row--;
                    break;
                case 'B': // Flèche du bas
                    if (row < 9) row++;
                    break;
                case 'C': // Flèche de droite
                    if (col < 19) col++;
                    break;
                case 'D': // Flèche de gauche
                    if (col > 0) col--;
                    break;
            }
        } else if (ch == 'q') {
            break; // Quitte le programme si 'q' est pressé
        }
    }

    return 0;
}
