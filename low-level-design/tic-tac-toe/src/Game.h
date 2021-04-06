#ifndef GAME_H_
#define GAME_H_


#include "Player.h"
#include "Move.h"
#include <vector>
#include "Board.h"
class Game
{
private:
    Board board;
    Player player1;
    Player player2;
    int turn = 0;
    std::vector<Move> movesRecord;

public:
    Game(int size);
    void addPlayers(Player player1, Player player2);
    Player getPlayer();
    void makeMove(int x, int y);
    void printMoves();
};


#endif