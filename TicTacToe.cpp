#include <iostream>


enum class BoardSpace { Empty, P1, P2 };

/*
3d array empty spaces that we can return to

@param
@return the board
*/
BoardSpace ** CreateBoard()
{
    // Allocate a 2 dimensional array to return
    BoardSpace **ret = new BoardSpace*[3];
    for( int i=0; i<3; i++ )
    {
        ret[i] = new BoardSpace[3];
    }

    // Fill the
    for( int i=0; i<3; i++ )
    {
        for( int j=0; j<3; j++ )
        {
            ret[i][j] = BoardSpace::Empty;
        }
    }

    return ret;
}

int main( int argc, char *argv[])
{

    //BoardSpace **game_board = CreateBoard();
    CreateBoard();
    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
    // BoardSpace player_ = BoardSpace::P1;
    // //9 potential possible moves
    // for(int i = 0; i < 9; i++) {
    //
    //     DisplayBoard(game_board);
    //     bool input = false;
    //   //  switches beteen player turns, if the position is not valid, then ask again
    //     while(!input) {
    //       if(player_==BoardSpace){
    //         // ? just says that if this condition(players choice) is correct return true if not return false
    //         int choice= P1?1:2;
    //         input = PlaceMarker(game_board, choice / 3, choice % 3, player_);
    //       }
    //     }
    //     if(player_==BoardSpace){
    //     player_ = P1?BoardSpace::P2:BoardSpace::P1;
    //   }
    // }
    // DisplayBoard( game_board );
}
