#include <iostream>
#include <string>
#include <vector>

#include "game.hpp"

int main(){


	int i, choice;
	vector<int> tab(9);
	for(i=1;i<10;i++){ tab[i-1] = i; }
	string p1;
	string p2;
	vector<int> new_tab(9);

	int choix_menu = menu();

	if (choix_menu == 1){

		p1 = player_name();
		p2 = player_name();

		print_plain_board();


		for(i=0;i<9;i++){ 

			cout << "\t\t Tour n°" << i+1 << "\n"; 
		
			if( (i==0)|(i==2)|(i==4)|(i==6)|(i==8) )
				{choice = game_choice(p1);
				new_tab = refresh_board_firstplayer(choice, tab);}

			else
				{choice = game_choice(p2);
				new_tab = refresh_board_secondplayer(choice, tab);}
		

			affiche(new_tab);

			if (check_win(new_tab) == 1) return 0;

			tab = new_tab;
		}

	cout << "\t ====================================== \n";
	cout << "\t Match nul !! Vous êtes nuls tous les 2 ! \n";
	}

	else if (choix_menu == 2){
		cout << "\t Allez lire les règles sur internet :) \n";}

    return 0;

}