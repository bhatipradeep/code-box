
#include<string>
#include"Move.h"
class Board{

    private:
        char **board=0;
        int size=0;
        char winner;
        bool winnerDeclared = false;
        bool verifyMove(Move &move);
        void computeWinner(Move move);
    public:
        Board(int size);
        void makeMove(Move move);
        void displayBoard();

};