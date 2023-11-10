char move = _getch();    //Déplacement de Snoopy

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
