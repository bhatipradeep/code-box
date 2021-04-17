#include<string>
#include"EnumsAndConstants.h"
#include"Vehicle.h"

class ParkingSpot{

    private:
    std::string spotId;
    ParkingSpotType parkingSpotType;
    bool isAvailable = true;
    Vehicle* vehicle;

    public:
    ParkingSpot(std::string spotId,ParkingSpotType parkingSpotType){
        this->spotId = spotId;
        this->parkingSpotType = parkingSpotType;
    }

    std::string getId(){
        return this->spotId;
    }

    ParkingSpotType getParkingSpotType(){
        return this->parkingSpotType;
    }

    bool checkAvailibilty(){
        return this->isAvailable;
    }

    void addVehicle(Vehicle *vehicle){
        this->vehicle = vehicle;
        this->isAvailable = false;
    }

    void removeVehicle(){
        this->vehicle = nullptr;
        this->isAvailable = true;
    }


};