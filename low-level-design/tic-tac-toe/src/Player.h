#include<string>

class Player{
    private:
    std::string name;
    std::string symbol;

    public:
    Player(std::string name,std::string symbol);

    std::string getName();
    
    std::string getSymbol();
};