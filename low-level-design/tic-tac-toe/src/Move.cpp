#include"Move.h"


Move::Move(int x,int y,char symbol){
    this->x=x;
    this->y=y;
    this->symbol=symbol;
}

int Move::getX(){
    return x;
}

int Move::getY(){
    return y;
}

char Move::getSymbol(){
    return symbol;
}

std::string Move::getStatus(){
    return status;
}

void Move::setStatus(std::string status){
    this->status = status;
}