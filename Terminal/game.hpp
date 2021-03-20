#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int menu();
string player_name();
int print_plain_board();
int game_choice(string name);
std::vector<int> refresh_board_firstplayer(int n, std::vector<int> &tableau1);
std::vector<int> refresh_board_secondplayer(int n, std::vector<int> &tableau2);
void affiche(std::vector<int> &tab);
int check_win(std::vector<int> &tab);


#endif 


