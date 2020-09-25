#include <iostream>

class Board {
public:
	Board(){
    for(int i =0; i < 3; i++){
      for(int j=0; j< 3; j++){
         board[i][j]= "empty";
      }
    }
  };
	void DisplayBoard(){
    for(int i =0; i < 3; i++){
      std::cout<<i+1;
      for(int j=0; j< 3; j++){
        std::cout<<"|" << board[i][j];
      }
      std::cout<<"|"<<std::endl;
    }
  };

  void GetPlayerChoice(){
    int choice1;
    int choice2;
    std::string marker;
    bool goodChoice = false;
    bool goodRow = false;
    bool goodCol = false;
    while(goodChoice == false){
      std::cout<<"What position would you like to fill?"<<std::endl;
      while(goodRow == false){
        std::cout<<"Row:"<<std::endl;
        std::cin >> choice1;
        if(choice1 < 1 || choice1 > 3){
          std::cout<<"Enter a valid row choice"<<std::endl;
        }
        else{
          goodRow = true;
        }
      }
      while(goodCol == false){
        std::cout<<"Col:"<<std::endl;
        std::cin >> choice2;
        if(choice2 < 1 || choice2 > 3){
          std::cout<<"Enter a valid col choice"<<std::endl;
        }
        else{
          goodCol = true;
        }
      }
      if(goodRow == true && goodCol == true){
        if(board[choice1][choice2] == "empty"){
          std::cout<<"What would you like your marker to be?"<<std::endl;
          std::cin >> marker;
          goodChoice = true;
          PlaceMarker(choice1,choice2,marker);
          DisplayBoard();
        }
        else{
          goodRow = false;
          goodCol = false;
        }

      }
    }
};

void PlaceMarker(int x, int y, std::string mark){
  board[x][y] = mark;

};

	int get_rows() const {return 3; }  // you should be able to change the size of your
	int get_cols() const {return 3; }  // board by changing these numbers and the numbers in the arr_ field

private:
	std::string board[3][3];
};

int main( int argc, char *argv[])
{
    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
    Board p1;
    p1.DisplayBoard();
    p1.GetPlayerChoice();

}
