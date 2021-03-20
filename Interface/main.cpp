#include <iostream>
#include <string>
#include <vector>
#include <SDL2/SDL.h>        
#include <SDL2/SDL_image.h>        
#include <SDL2/SDL_ttf.h>

using namespace std;

int main(){


	int i;
	std::vector <int> tab(9);
	int px,py;
	int quit = 0;
    SDL_Event event;
    int var_start = 0;
    int j1 = 1; 
    int j2 = 0;
    int game_begin = 0;
    std::vector <int> played(9);

	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();
    SDL_Window * window = SDL_CreateWindow("TicTacToe - MAHTANI",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	TTF_Font* Sans = TTF_OpenFont("sans.ttf", 15);

	SDL_Surface *start;
	SDL_Surface *c1;
	SDL_Surface *c2;
	start = IMG_Load("start.png"); 
	c1 = IMG_Load("c1.png");
	c2 = IMG_Load("c2.png"); 

	SDL_Texture *txt_start;
	SDL_Texture *txt_c1;
	SDL_Texture *txt_c2;
	txt_start = SDL_CreateTextureFromSurface(renderer, start);
	txt_c1 = SDL_CreateTextureFromSurface(renderer, c1);
	txt_c2 = SDL_CreateTextureFromSurface(renderer, c2);


	while (!quit)
    {
	if (SDL_PollEvent(&event))
	{
        	switch (event.type)
        	{
            	case SDL_QUIT:
                	quit = 1;
                	break;
               	

				case  SDL_MOUSEBUTTONDOWN:      //lors d'un clic de la souris
					SDL_GetMouseState(&px, &py);
					//printf("px=%d py=%d\n",px,py);

					if ((px>220) && (py>220) && (px<380) && (py<380) && (var_start == 0)){
						printf("\n \t Let the game begin ! \n");
						var_start = 1;}
					
					if ((px>150) && (py>150) && (px<250) && (py<250) && (game_begin == 1) && (played[0] == 0)){ //lorsqu'on clic sur la 1ere case
						if (j1 == 1){printf("j1 joue ici \n"); tab[0]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[0]=2; j1=1; j2=0;}
						/*played[0] = 1;*/		}

					else if ((px>250) && (py>150) && (px<350) && (py<250) && (game_begin == 1) && (played[1] == 0)){ //lorsqu'on clic sur la 2eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[1]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[1]=2; j1=1; j2=0;}
						/*played[1] = 1;*/		}

					else if ((px>350) && (py>150) && (px<450) && (py<250) && (game_begin == 1) && (played[2] == 0)){ //lorsqu'on clic sur la 3eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[2]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[2]=2; j1=1; j2=0;}
						/*played[2] = 1;*/		}

					else if ((px>150) && (py>250) && (px<250) && (py<350) && (game_begin == 1) && (played[3] == 0)){ //lorsqu'on clic sur la 4eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[3]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[3]=2; j1=1; j2=0;}
						/*played[3] = 1;*/		}

					else if ((px>250) && (py>250) && (px<350) && (py<350) && (game_begin == 1) && (played[4] == 0)){ //lorsqu'on clic sur la 5eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[4]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[4]=2; j1=1; j2=0;}
						/*played[4] = 1;*/		}

					else if ((px>350) && (py>250) && (px<450) && (py<350) && (game_begin == 1) && (played[5] == 0)){ //lorsqu'on clic sur la 6eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[5]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[5]=2; j1=1; j2=0;}
						/*played[5] = 1;*/		}

					else if ((px>150) && (py>350) && (px<250) && (py<450) && (game_begin == 1) && (played[6] == 0)){ //lorsqu'on clic sur la 7eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[6]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[6]=2; j1=1; j2=0;}
						/*played[6] = 1;*/		}

					else if ((px>250) && (py>350) && (px<350) && (py<450) && (game_begin == 1) && (played[7] == 0)){ //lorsqu'on clic sur la 8eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[7]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[7]=2; j1=1; j2=0;}
						/*played[7] = 1;*/		}

					else if ((px>350) && (py>350) && (px<450) && (py<450) && (game_begin == 1) && (played[8] == 0)){ //lorsqu'on clic sur la 9eme case
						if (j1 == 1){printf("j1 joue ici \n"); tab[8]=1; j1=0; j2=1;}
						else {printf("j2 joue ici \n"); tab[8]=2; j1=1; j2=0;}
						/*played[8] = 1;*/		}
					
					break;
        	}
	}

	SDL_SetRenderDrawColor(renderer, 255, 230, 230, 230);
	SDL_Rect rect = {0, 0, 600, 600}; 
	SDL_RenderFillRect(renderer, &rect);
	
	SDL_Rect dstrect_start = {200, 200, 200, 200};
    SDL_RenderCopy(renderer, txt_start, NULL, &dstrect_start);
	

    if (var_start == 1){
    	SDL_SetRenderDrawColor(renderer, 255, 230, 230, 230);
		SDL_Rect rect1 = {0, 0, 600, 600};
		SDL_RenderFillRect(renderer, &rect1);
    
    	SDL_SetRenderDrawColor(renderer, 0, 0, 0,255); //tableau de jeu
		SDL_RenderDrawLine(renderer, 150,150,450,150);
		SDL_RenderDrawLine(renderer, 150,150,150,450);
		SDL_RenderDrawLine(renderer, 150,450,450,450);
		SDL_RenderDrawLine(renderer, 450,450,450,150);
		SDL_RenderDrawLine(renderer, 250,150,250,450);
		SDL_RenderDrawLine(renderer, 350,150,350,450);
		SDL_RenderDrawLine(renderer, 150,350,450,350);
		SDL_RenderDrawLine(renderer, 150,250,450,250);

		game_begin = 1;
	}

	
	if(game_begin == 1){

		SDL_Rect dstrect_c1;
		SDL_Rect dstrect_c2;

		for(i=0;i++;i<9){
			if ((tab[i] == 1) && (played[i] == 0)){
				if (i<3){
					dstrect_c1 = {150+100*i, 150, 100, 100};
    				//SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    				}
    			else if ((i>2) && (i<6)){
					dstrect_c1 = {150+100*(i-3), 250, 100, 100};
    				//SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    				}
    			else if ((i>5) && (i<9)){
					dstrect_c1 = {150+100*(i-6), 350, 100, 100};
    				//SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    				}
    			SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		}
    		if ((tab[i] == 2) && (played[i] == 0)){
				if (i<3){
					dstrect_c2 = {150+100*i, 150, 100, 100};
    				//SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    				}
    			else if ((i>2) && (i<6)){
					dstrect_c2 = {150+100*(i-3), 250, 100, 100};
    				//SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    				}
    			else if ((i>5) && (i<9)){
					dstrect_c2 = {150+100*(i-6), 350, 100, 100};
    				//SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    				}
    			SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		}
    	played[i]=1; 
		}
	}
		/*
		//QD LE JOUEUR 1 JOUE
		if((tab[0]==1) && (played[0] == 0)){
			SDL_Rect dstrect_c1 = {150, 150, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[0] = 1;}
    	if((tab[1]==1) && (played[1] == 0)){
			SDL_Rect dstrect_c1 = {250, 150, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[1] = 1;}				
		if((tab[2]==1) && (played[2] == 0)){
			SDL_Rect dstrect_c1 = {350, 150, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[2] = 1;}
    	if((tab[3]==1) && (played[3] == 0)){
			SDL_Rect dstrect_c1 = {150, 250, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[3] = 1;}				
		if((tab[4]==1) && (played[4] == 0)){
			SDL_Rect dstrect_c1 = {250, 250, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[4] = 1;}				
		if((tab[5]==1) && (played[5] == 0)){
			SDL_Rect dstrect_c1 = {350, 250, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[5] = 1;}			
		if((tab[6]==1) && (played[6] == 0)){
			SDL_Rect dstrect_c1 = {150, 350, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[6] = 1;}				
		if((tab[7]==1) && (played[7] == 0)){
			SDL_Rect dstrect_c1 = {250, 350, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[7] = 1;}				
		if((tab[8]==1) && (played[8] == 0)){
			SDL_Rect dstrect_c1 = {350, 350, 100, 100};
    		SDL_RenderCopy(renderer, txt_c1, NULL, &dstrect_c1);
    		played[8] = 1;}				

    	//QD LE JOUEUR 2 JOUE
		if((tab[0]==2) && (played[0] == 0)){
			SDL_Rect dstrect_c2 = {150, 150, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[0] = 1;}
    	if((tab[1]==2) && (played[1] == 0)){
			SDL_Rect dstrect_c2 = {250, 150, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[1] = 1;}				
		if((tab[2]==2) && (played[2] == 0)){
			SDL_Rect dstrect_c2 = {350, 150, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[2] = 1;}
    	if((tab[3]==2) && (played[3] == 0)){
			SDL_Rect dstrect_c2 = {150, 250, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[3] = 1;}				
		if((tab[4]==2) && (played[4] == 0)){
			SDL_Rect dstrect_c2 = {250, 250, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[4] = 1;}				
		if((tab[5]==2) && (played[5] == 0)){
			SDL_Rect dstrect_c2 = {350, 250, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[5] = 1;}			
		if((tab[6]==2) && (played[6] == 0)){
			SDL_Rect dstrect_c2 = {150, 350, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[6] = 1;}				
		if((tab[7]==2) && (played[7] == 0)){
			SDL_Rect dstrect_c2 = {250, 350, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[7] = 1;}				
		if((tab[8]==2) && (played[8] == 0)){
			SDL_Rect dstrect_c2 = {350, 350, 100, 100};
    		SDL_RenderCopy(renderer, txt_c2, NULL, &dstrect_c2);
    		played[8] = 1;}	
    }*/
	
    //image du gagnant

    // QD LE JOUEUR 1 GAGNE
    if( ((tab[0] == 1) && (tab[1] == 1) && (tab[2] == 1)) || //1ere ligne
    	((tab[0] == 1) && (tab[3] == 1) && (tab[6] == 1)) || //1ere colonne 
    	((tab[0] == 1) && (tab[4] == 1) && (tab[8] == 1)) || //1ere diagonale
		((tab[1] == 1) && (tab[4] == 1) && (tab[7] == 1)) || //2eme colonne
		((tab[2] == 1) && (tab[5] == 1) && (tab[8] == 1)) || //3eme colonne
		((tab[3] == 1) && (tab[4] == 1) && (tab[5] == 1)) || //2eme ligne
		((tab[2] == 1) && (tab[4] == 1) && (tab[6] == 1)) || //2eme diagonale
		((tab[6] == 1) && (tab[7] == 1) && (tab[8] == 1)))//3eme ligne
		{cout << "\t ====================================== \n";
		cout << "\t\t Le joueur 1 gagne !!! Bravo \n";
		return 1;} 

	// QD LE JOUEUR 2 GAGNE 
	else if( ((tab[0] == 2) && (tab[1] == 2) && (tab[2] == 2)) || //1ere ligne
    	((tab[0] == 2) && (tab[3] == 2) && (tab[6] == 2)) || //1ere colonne 
    	((tab[0] == 2) && (tab[4] == 2) && (tab[8] == 2)) || //1ere diagonale
		((tab[1] == 2) && (tab[4] == 2) && (tab[7] == 2)) || //2eme colonne
		((tab[2] == 2) && (tab[5] == 2) && (tab[8] == 2)) || //3eme colonne
		((tab[3] == 2) && (tab[4] == 2) && (tab[5] == 2)) || //2eme ligne
		((tab[2] == 2) && (tab[4] == 2) && (tab[6] == 2)) || //2eme diagonale
		((tab[6] == 2) && (tab[7] == 2) && (tab[8] == 2)))//3eme ligne
		{cout << "\t ====================================== \n";
		cout << "\t\t Le joueur 2 gagne !!! Bravo \n";
		return 1;}  

	// MATCH NUL
	else if( (played[0] == 1) &&
			 (played[1] == 1) &&
			 (played[2] == 1) &&
			 (played[3] == 1) &&
			 (played[4] == 1) &&
			 (played[5] == 1) &&
			 (played[6] == 1) &&
			 (played[7] == 1) &&
			 (played[8] == 1)   )
		{cout << "\t ====================================== \n";
		cout << "\t\t Match nul !! Pas de gagnant, rejouez ;) \n";
		return 1;}


	SDL_RenderPresent(renderer); //appel du renderer

	}

	SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
 
    SDL_Quit();

    return 0;

}