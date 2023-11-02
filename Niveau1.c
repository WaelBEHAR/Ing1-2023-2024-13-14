#include <ncurses.h>

int main() {
    initscr();  // Initialise la bibliothèque ncurses
    raw();      // Désactive la mise en mémoire tampon de ligne
    keypad(stdscr, TRUE); // Active les touches spéciales (comme les flèches)
    noecho();   // Désactive l'affichage des caractères saisis

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

    int row = 5; // Position initiale de la ligne pour le point
    int col = 10; // Position initiale de la colonne pour le point

    int ch;

    while (1) {
        clear(); // Efface l'écran

        // Affiche la matrice avec le point à la position actuelle
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 20; j++) {
                if (i == row && j == col) {
                    printw("P "); // Affiche le point ('P')
                } else if (m[i][j] == 9) {
                    printw("9 "); // Affiche le chiffre 9
                } else {
                    printw(". "); // Affiche un point
                }
            }
            printw("\n");
        }

        refresh(); // Rafraîchit l'écran

        ch = getch(); // Attend l'entrée de l'utilisateur

        // Déplacement en fonction de la touche appuyée
        switch (ch) {
            case KEY_UP:
                if (row > 0) row--;
                break;
            case KEY_DOWN:
                if (row < 9) row++;
                break;
            case KEY_LEFT:
                if (col > 0) col--;
                break;
            case KEY_RIGHT:
                if (col < 19) col++;
                break;
            case 'q':
                endwin(); // Termine l'utilisation de ncurses
                return 0;
            default:
                break;
        }
    }

    endwin(); // Termine l'utilisation de ncurses

    return 0;
}
