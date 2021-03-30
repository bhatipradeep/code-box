#include "Board.h"
#include "Move.h"
Board::Board(int size)
{
    this->size=size;
    this->board = new char *[size];
    for (int i = 0; i < size; i++)
    {
        this->board[i] = new char[size];
        for(int j=0;j<size;j++){
            board[i][j]=' ';
        }
    }
}

bool Board::verifyMove(Move &move){
    
    bool verified = true;
    if(winnerDeclared){
        move.setStatus("Move invalid as winner is already been declared");
        verified=false;
    }else if(move.getX()>size-1 || move.getX()<0 || move.getY()>size-1 || move.getY()<0){
        move.setStatus("Move location out of boundaries.");
        verified = false;
    }else if(board[move.getX()][move.getY()]!=' '){
        move.setStatus("Move location is already occupied.");
        verified=false;
    }else{
        move.setStatus("Move successfully placed on board.");
    }
    return verified;
}

void Board::computeWinner(Move move){

}


void Board::makeMove(Move move){
    if(verifyMove(move)==true){
        board[move.getX()][move.getY()] = move.getSymbol();
        computeWinner(move);
    }
}


void Board::displayBoard(){

    
}