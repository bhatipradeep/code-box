#ifndef BOARD_H_
#define BOARD_H_

#include <string>
#include "Move.h"
class Board
{

private:
    char **board = 0;
    int size = 0;
    char winner;
    int *rowSum = 0;
    int *colSum = 0;
    int diagSum = 0;
    int reverseDiagSum = 0;
    bool winnerDeclared = false;
    std::pair<char, char> symbols;
    bool verifyMove(Move &move);
    void computeWinner(Move move);

public:
    Board(){};
    Board(int size);
    void addSymbols(char symbol1, char symbol2);
    void makeMove(Move &move);
    void displayBoard();
};

#endif