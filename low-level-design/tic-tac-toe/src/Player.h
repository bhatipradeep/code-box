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