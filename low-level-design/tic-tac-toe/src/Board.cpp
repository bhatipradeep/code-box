#include "Board.h"
#include "Move.h"
#include <iostream>

Board::Board(int size)
{
    this->size = size;
    this->board = new char *[size];
    for (int i = 0; i < size; i++)
    {
        this->board[i] = new char[size];
        for (int j = 0; j < size; j++)
        {
            board[i][j] = ' ';
        }
    }
    rowSum = new int[size];
    colSum = new int[size];
    for (int i = 0; i < size; i++)
    {
        rowSum[i] = 0;
        colSum[i] = 0;
    }
    symbols = {' ', ' '};
}

void Board::addSymbols(char symbol1, char symbol2)
{
    symbols = {symbol1, symbol2};
}

bool Board::verifyMove(Move &move)
{

    bool verified = false;
    if (winnerDeclared)
    {
        move.setStatusMessage("Invalid move. Winner already declared.");
    }
    else if (move.getX() > size - 1 || move.getX() < 0 || move.getY() > size - 1 || move.getY() < 0)
    {
        move.setStatusMessage("Move location out of boundaries.");
    }
    else if (board[move.getX()][move.getY()] != ' ')
    {
        move.setStatusMessage("Move location is already occupied.");
    }
    else
    {
        move.setStatusMessage("Move successfully placed on board.");
        verified = true;
    }
    if (verified)
    {
        move.setStatus(1);
    }
    return verified;
}

void Board::computeWinner(Move move)
{
    int factor = (move.getSymbol() == symbols.first ? 1 : -1);
    rowSum[move.getX()] += factor;
    colSum[move.getY()] += factor;


    if (move.getX() == move.getY())
    {
        diagSum += factor;
    }
    if (move.getX() + move.getY() == size - 1)
    {
        reverseDiagSum += factor;
    }
    if (abs(rowSum[move.getX()]) == size || abs(colSum[move.getY()]) == size || abs(diagSum) == size || abs(reverseDiagSum) == size)
    {
        winnerDeclared = true;
        winner = move.getSymbol();
    }
}

void Board::makeMove(Move &move)
{
    if (verifyMove(move) == true)
    {
        board[move.getX()][move.getY()] = move.getSymbol();
        computeWinner(move);
    }
}

void Board::displayBoard()
{
    for (int i = 0; i < size * 2; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "|";
        for (int j = 0; j < size; j++)
        {
            std::cout << board[i][j] << "|";
        }
        std::cout << std::endl;
        for (int j = 0; j < size * 2 + 2; j++)
        {
            std::cout << "-";
        }
        std::cout << std::endl;
    }
    if (winnerDeclared)
    {
        std::cout << "Game Over. Winner: " << winner<<std::endl;
    }
}
