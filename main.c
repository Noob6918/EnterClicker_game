#include<stdio.h>
#include<stdlib.h>

// defines "game" that is used for some variables in this game
// i probably dont need this since i cant use "."
// in the variables name


#define game


int load_game(int clicks, int multi);
int onTick();


int main() {

  int game_clicks = 0;
  int game_multi = 1;
  int game_clicks_Ps = 0;
  // variables

  

  load_game(game_clicks, game_multi); // calls the load_game func
  return 0;
}

// on tick function
int onTick() {

  return 0;
}


// the function that loads the game
int load_game(int clicks, int multi) {
  // the games map
  char *game_map[] = {
    " #######",
    "#########",
    "#########",
    " #######",

  }; // game ascii art made by noob(onwer)

  // declares the char enter
  char enter;
  char* supersecret = "supersecret"; // super secret string
  

  // prints the game
  printf("enterClicker 1.0v\n");
  
  for(int i=0; i < 4; i++) {
    printf("%s\n", game_map[i]);
  }

  printf("%d clicks\n", clicks);
  printf("%d multi\n", multi);
  
  printf("press enter: ");
  scanf("%c", &enter);

  if (strcmp(&enter, &supersecret) == 1) {
    clicks++;
    system("clear");
    load_game(clicks, multi);
  } else {

    clicks++;
    system("clear");
    load_game(clicks, multi);
  } // this code is ugly af



  return clicks;


}

