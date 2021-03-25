#include"../src/Player.h"
#include<iostream>

int main(){
    Player p1("abc","1");
    std::cout<<p1.getName()<<std::endl;
    std::cout<<p1.getSymbol()<<std::endl;
}