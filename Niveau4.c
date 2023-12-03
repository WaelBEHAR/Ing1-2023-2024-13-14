int Teleporteur1Depart[2] = {3, 3};
int Teleporteur1Arrivee[2] = {7, 7};

int Teleporteur2Depart[2] = {2, 6};
int Teleporteur2Arrivee[2] = {5, 10};

int Teleporteur3Depart[2] = {1, 9};
int Teleporteur3Arrivee[2] = {6, 15};

// Dans la boucle de la fonction Affichage
if ((i == Teleporteur1Depart[0] && j == Teleporteur1Depart[1]) ||
(i == Teleporteur1Arrivee[0] && j == Teleporteur1Arrivee[1]) ||
(i == Teleporteur2Depart[0] && j == Teleporteur2Depart[1]) ||
(i == Teleporteur2Arrivee[0] && j == Teleporteur2Arrivee[1]) ||
(i == Teleporteur3Depart[0] && j == Teleporteur3Depart[1]) ||
(i == Teleporteur3Arrivee[0] && j == Teleporteur3Arrivee[1])) {
printf("%c", 0x10);
indicateur = 1;
}

void teleportChar(int PosJoueur[2], int T1[2], int T2[2]) {
    // ca si le joueur est sur le premier point de téléportation
    if (PosJoueur[0] == T1[0] && PosJoueur[1] == T1[1]) {
        PosJoueur[0] = T2[0]; // Modifie la position du joueur vers le deuxième point
        PosJoueur[1] = T2[1];
    }
        // ca si le joueur est sur le deuxième point de téléportation
    else if (PosJoueur[0] == T2[0] && PosJoueur[1] == T2[1]) {
        PosJoueur[0] = T1[0]; // Modifie la position du joueur vers le premier point
        PosJoueur[1] = T1[1];
    }
}
