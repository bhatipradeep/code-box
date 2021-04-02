
#include<string>

class Move{
    private:
        int x;
        int y;
        char symbol;
        std::string statusMessage = "Unplaced";
        int status = -1;
    public:
    Move(){};
    Move(int x,int y,char symbol);

    int getX();
    int getY();
    char getSymbol();
    std::string getStatusMessage();
    void setStatusMessage(std::string statusMessage);
    int getStatus();
    void setStatus(int status);
};