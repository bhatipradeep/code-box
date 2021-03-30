
#include<string>

class Move{
    private:
        int x;
        int y;
        char symbol;
        std::string status = "Unplaced";
    public:
    Move(int x,int y,char symbol);

    int getX();
    int getY();
    char getSymbol();
    std::string getStatus();
    void setStatus(std::string status);
};