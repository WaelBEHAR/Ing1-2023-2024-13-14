//
// Created by Macbook on 31/10/2023.
//

#include <stdio.h>

int main() {
    int Choix;
    printf("sélectionnez un des choix ci-dessous \n");

    printf("\t1.  Règles du jeu (affichées à l'écran)\n\t2.  Lancer un nouveau jeu à partir du niveau 1\n\t3.  Charger une partie\n\t4.  Mot de Passe\n\t5.  Scores\n\t6.  Quitter\n");
    scanf("%d",&Choix);

    if (Choix == 1 ){
        printf("Règles du jeu:\nChaque niveau devra être résolu en moins de 120 secondes.\nSi le temps est écoulé, le joueur perd une vie et recommence le niveau.\nLe but est de récupérer les 4 oiseaux du niveau sans se faire toucher par la balle et/ou les ennemis (si présents).\n");
    }
    if (Choix == 2){
        printf("lancement du jeu a partir du niveaux 1");
    }
    if (Choix == 3){
        printf("vous voulez charger quelle partie");
    }
    if(Choix == 4){
        printf("quelle est le mot de passe ?");
    }
    if(Choix== 5){
        printf("votre score est...");
    }
    if (Choix== 6){
        printf("merci pour votre partie ");

    }
    if(Choix > 6){
        printf("erreur de saisie sélectionnez à nouveau\n");
        printf("\t1.  Règles du jeu (affichées à l'écran)\n\t2.  Lancer un nouveau jeu à partir du niveau 1\n\t3.  Charger une partie\n\t4.  Mot de Passe\n\t5.  Scores\n\t6.  Quitter\n");
        scanf("%d",&Choix);
    }




}
