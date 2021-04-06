#include "../src/Game.h"
#include "../src/Player.h"
#include <iostream>
#include <string>

int main(){
    int size;
    std::cout<<"Enter game dimensions (Eg.3) :";
    std::cin>>size;

    Game game = Game(size);
    
    std::string name;
    char symbol;
    std::cout<<"Enter Player1 Name:";
    std::cin>>name;
    std::cout<<"Enter Player1 Symbol(length=1):";
    std::cin>>symbol;
    Player player1(name,symbol);
    std::cout<<"Enter Player2 Name:";
    std::cin>>name;
    std::cout<<"Enter Player2 Symbol(length=1):";
    std::cin>>symbol;
    Player player2(name,symbol);

    game.addPlayers(player1,player2);

    std::cout<<"Game will start with player - 1 move ! "<<std::endl;
    while(true){
        std::cout<<"Enter Move -> x <space> y :";
        int x,y;
        std::cin>>x>>y;
        game.makeMove(x,y);

    }
}