#include <iostream>
#include <string>
#include <vector>

#include "game.hpp"

using namespace std;


int menu(){

	int choice;

	cout << "\t  Bienvenue dans un jeu de TicTacToe \n";
	cout << "\t ================ MENU ================ \n";
	cout << "\t\t (1) : Jouer \n";
	cout << "\t\t (2) : Règles du jeu \n";
	cout << "\t\t (3) : Quitter \n";
	cout << "\t ====================================== \n";
	cout << "\t Que voulez-vous faire ? \n";
	cin >> choice;
	cin.ignore();

return choice;
}

string player_name(){

	string player;
	cout << "\t Entre le nom du 1er joueur :\n";
	cin >> player;
	cin.ignore();

return player;
}


int print_plain_board(){

int i;
	cout << "---------------\n";
	for(i=1;i<10;i++){

		cout << "| " << i << " |";
		if ((i==3) | (i==6) | (i==9)){
			cout << "\n";
			cout << "---------------\n";
		}
	}
return 1;
}

int game_choice(string name){

	int play;
	cout << "\t A vous " << name << ", où voulez-vous jouer ? :\n";
	cin >> play;
	cin.ignore();

return play;
}

std::vector<int> refresh_board_firstplayer(int n, std::vector<int> &tableau1){

	int i;
	if ((tableau1[n-1] == 0)|(tableau1[n-1] == 11)) {
			cout << "Vous ne pouvez pas jouer sur une case déjà jouée, relisez les règles !!";
			return tableau1;}

	for(i=0;i<10;i++){
		if (tableau1[i] == n){
			tableau1[i]=0;
		}
	}
	return tableau1;
}

std::vector<int> refresh_board_secondplayer(int n, std::vector<int> &tableau2){

	int i;

	if ((tableau2[n-1] == 11)|(tableau2[n-1] == 0)){
			cout << "Vous ne pouvez pas jouer sur une case déjà jouée, relisez les règles !!";
			return tableau2;}

	for(i=0;i<10;i++){
		if (tableau2[i] == n){
			tableau2[i]=11;
		}
	}
	return tableau2;
}

void affiche(std::vector<int> &tab){

	int i;
	cout << "---------------\n";
	
	for(i=0;i<9;i++){

		cout << "| " << tab[i] << " |";
		if ((i==2) | (i==5) | (i==8)){
			cout << "\n";
			cout << "---------------\n";
		}
	}
}

int check_win(std::vector<int> &tab){

	if( ((tab[0] == tab[1]) && (tab[0] == tab[2])) |
		((tab[3] == tab[4]) && (tab[3] == tab[5])) |
		((tab[6] == tab[7]) && (tab[7] == tab[8])) |

		((tab[0] == tab[3]) && (tab[3] == tab[6])) |
		((tab[1] == tab[4]) && (tab[4] == tab[7])) |
		((tab[2] == tab[5]) && (tab[5] == tab[8])) |

		((tab[0] == tab[4]) && (tab[4] == tab[8])) |
		((tab[2] == tab[4]) && (tab[4] == tab[6])) )

		{cout << "\t ====================================== \n";
		cout << "\t\t Vous avez gagné !!! Bravo \n";
		return 1;}

	else {return 0;}
	
}
