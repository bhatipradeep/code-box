#include "Game.h"
#include "Player.h"
#include <iostream>
#include "Board.h"

Game::Game(int size){
    turn=0;
    board = Board(size);
}

void Game::addPlayers(Player player1,Player player2){
    this->player1=player1;
    this->player2=player2;
    board.addSymbols(player1.getSymbol(),player2.getSymbol());
}


Player Game::getPlayer()
{
    return turn % 2 == 0 ? player1 : player2;
}


void Game::makeMove(int x, int y)
{
    char symbol = getPlayer().getSymbol();
    Move move(x,y,symbol);
    board.makeMove(move);
    if (move.getStatus() == 1)
    {
        turn++;
        movesRecord.push_back(move);
    }
    board.displayBoard();
    std::cout << move.getStatusMessage() << std::endl;
}

void Game::printMoves(){
    std::cout<<"Symbol: x y"<<std::endl;
    for(int i=0;i<movesRecord.size();i++){
        std::cout<<movesRecord[i].getSymbol()<<" "<<movesRecord[i].getX()<<" "<<movesRecord[i].getY()<<std::endl;
    }
}