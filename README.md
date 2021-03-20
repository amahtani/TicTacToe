======== MENU ========
(1) : Jouer
(2) : Règles du jeu
(3) : Quitter
=======================
Que voulez-vous faire ?

Lors du lancement du jeu (menu « Jouer » ) :
· chaque joueur saisi son nom
· le programme affiche le damier 3x3 en numérotant chaque case
· le programme invite le premier joueur (choisi aléatoirement) à placer son symbole en
désignant le numéro de la case.

Entrez le nom du premier joueur : toto
Entrez le nom du deuxième joueur : titi
-------------
| 1 | 2 | 3 |
-------------
| 4 | 5 | 6 |
-------------
| 7 | 8 | 9 |
-------------
A vous, toto ! Où voulez-vous jouer (O)? :

A vous, toto ! Où voulez-vous jouer (O)? : 1
-------------
| O | 2 | 3 |
-------------
| 4 | 5 | 6 |
-------------
| 7 | 8 | 9 |
-------------

Etc ..

Il strictement INTERDIT de définir des variables globales !!!
Définissez sur ce structurogramme les données qui seront échangées entre chaque module.

Remarques
Module « choixJoueur » : donne le numéro de la case choisi par le joueur
Module « coupJoueur » : mémorise le choix du joueur et détermine la validité du coup joué
Module « analyserJeu » : analyse le jeu et donne l’état de la partie (partie non finie, partie gagnante,
match nul)

