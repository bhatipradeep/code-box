#include<string>
#include"Player.h"

Player::Player(std::string name,std::string symbol){
    this->name=name;
    this->symbol=symbol;
}

std::string Player::getName(){
    return name; 
}

std::string Player::getSymbol(){
    return symbol;
}

