#include"EnumsAndConstants.h"
#include<map>
#include<string>

class ParkingFloorDisplayBoard{
    private:
    std::string displayBoardId;
    std::map<ParkingSpotType,int>availableParkingSpots;

    public:
    ParkingFloorDisplayBoard(){};
    ParkingFloorDisplayBoard(std::string displayBoardId){
        this->displayBoardId = displayBoardId;
    }

    int getAvailableSpotsForType(ParkingSpotType parkingSpotType){
        return this->availableParkingSpots[parkingSpotType]; 
    }

    void resetAvailableSpotsForType(ParkingSpotType parkingSpotType,int numOfSpots){
        this->availableParkingSpots[parkingSpotType] = numOfSpots;
    }

    void updateSpotAssignment(ParkingSpotType parkingSpotType){
        this->availableParkingSpots[parkingSpotType]--;
    }

    void updateSpotEmpty(ParkingSpotType parkingSpotType){
        this->availableParkingSpots[parkingSpotType]++;
    }
};