#include<string>
#include"Player.h"

Player::Player(std::string name,char symbol){
    this->name=name;
    this->symbol=symbol;
}

std::string Player::getName(){
    return name; 
}

char Player::getSymbol(){
    return symbol;
}

