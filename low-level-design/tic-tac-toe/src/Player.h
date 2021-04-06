#ifndef PLAYER_H_
#define PLAYER_H_

#include<string>

class Player{
    private:
    std::string name;
    char symbol;

    public:
    Player(){};
    Player(std::string name,char symbol);

    std::string getName();
    char getSymbol();
};

#endif