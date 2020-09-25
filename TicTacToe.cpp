#include <iostream>


void DisplayBoard(std::string board[3][3]){
  for(int i =0; i < 3; i++){
    for(int j=0; j< 3; j++){
      std::cout<<"|" << board[i][j];
    }
    std::cout<<"|"<<std::endl;
  }
}


void fillBoard(std::string board[3][3]){

  for(int i =0; i < 3; i++){
    for(int j=0; j< 3; j++){
       board[i][j]= "empty";
    }
  }
}

int main( int argc, char *argv[])
{
    std::string new_game[3][3];
    fillBoard(new_game);


    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
    DisplayBoard(new_game);

}
