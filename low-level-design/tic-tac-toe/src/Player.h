#include<string>

class Player{
    private:
    std::string name;
    char symbol;

    public:
    Player(std::string name,char);

    std::string getName();
    
    char getSymbol();
};