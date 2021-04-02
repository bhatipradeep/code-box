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

int Move::getStatus(){
    return status;
}

void Move::setStatus(int status){
    this->status = status;
}

std::string Move::getStatusMessage(){
    return statusMessage;
}

void Move::setStatusMessage(std::string statusMessage){
    this->statusMessage = statusMessage;
}