#include<string>
#include<map>
#include<iostream>
#include"EnumsAndConstants.h"
#include"ParkingFloorDisplayBoard.h"
#include"ParkingSpot.h"

struct ParkingSpotsStore{
    std::map<std::string,ParkingSpot>compactParkingSpots;
    std::map<std::string,ParkingSpot>mediumParkingSpots;
    std::map<std::string,ParkingSpot>largeParkingSpots;
};


class ParkingFloor{
    private:
    std::string levelId;
    ParkingFloorDisplayBoard displayBoard;
    struct ParkingSpotsStore parkingSpotsStore;
    

    public:
    ParkingFloor(std::string levelId){
        this->levelId = levelId;
    }

    void setDisplayBoard(ParkingFloorDisplayBoard displayBoard){
        this->displayBoard = displayBoard;
    }

    void addParkingSpot(ParkingSpot parkingSpot){
        switch (parkingSpot.getParkingSpotType())
        {
        case COMPACT:
            this->parkingSpotsStore.compactParkingSpots[parkingSpot.getId()] = parkingSpot;
            break;
        case MEDIUM:
            this->parkingSpotsStore.mediumParkingSpots[parkingSpot.getId()] = parkingSpot;
            break;
        case LARGE:
            this->parkingSpotsStore.largeParkingSpots[parkingSpot.getId()] = parkingSpot;
            break;
        
        default:
            std::cout<<"Invalid Parking Spot Type";
            break;
        }

        this->displayBoard.resetAvailableSpotsForType(parkingSpot.getParkingSpotType(),this->parkingSpotsStore.compactParkingSpots.size());
    }

    void assignVehicleToSpot(Vehicle *vehicle,std::string spotId){
        switch ((*vehicle).getVehicleType())
        {
        case BIKE:
            this->parkingSpotsStore.compactParkingSpots[spotId].addVehicle(vehicle);
            this->displayBoard.updateSpotAssignment(ParkingSpotType::COMPACT);
            break;
        case CAR : case XUV:
            this->parkingSpotsStore.mediumParkingSpots[spotId].addVehicle(vehicle);
            this->displayBoard.updateSpotAssignment(ParkingSpotType::MEDIUM);
            break;
        case TRUCK:
            this->parkingSpotsStore.largeParkingSpots[spotId].addVehicle(vehicle);
            this->displayBoard.updateSpotAssignment(ParkingSpotType::LARGE);
            break;
        
        default:
            std::cout<<"Invalid Vehicle Type";
            break;
        }
        
    }

    void removeVehicleFromSpot(Vehicle vehicle,std::string spotId){
        switch (vehicle.getVehicleType())
        {
        case BIKE:
            this->parkingSpotsStore.compactParkingSpots[spotId].removeVehicle();
            this->displayBoard.updateSpotEmpty(ParkingSpotType::COMPACT);
            break;
        case CAR : case XUV:
            this->parkingSpotsStore.mediumParkingSpots[spotId].removeVehicle();
            this->displayBoard.updateSpotEmpty(ParkingSpotType::MEDIUM);
            break;
        case TRUCK:
            this->parkingSpotsStore.largeParkingSpots[spotId].removeVehicle();
            this->displayBoard.updateSpotEmpty(ParkingSpotType::LARGE);
            break;
        
        default:
            std::cout<<"Invalid Vehicle Type";
            break;
        }
    }

};