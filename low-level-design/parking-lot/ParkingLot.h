#include<map>
#include<string>
#include"ParkingFloor.h"
#include"Gate.h"
#include"ParkingRate.h"

class ParkingLot{
    private:


    
    //singleton instance
    static ParkingLot* parkingLotInstance;
    ParkingLot(){};


    std::string name;
    std::string id;
    ParkingRate parkingRate;
    std::map<std::string,ParkingFloor>parkingFloors;
    std::map<std::string,Entrance>entrances;
    std::map<std::string,Exit>exits;




    public:

    //singleton pattern instance provider
    static ParkingLot* getParkingLotInstance(){
        if(!parkingLotInstance){
            parkingLotInstance = new ParkingLot();
        }
        return parkingLotInstance;
    } 

    void setParkingRate(ParkingRate parkingRate){
        this->parkingRate=parkingRate;
    }

    void addParkingFloor(std::string levelId,ParkingFloor parkingFloor){
        this->parkingFloors[levelId]=parkingFloor;
    }

    void addEntranceGate(std::string gateId,Entrance entrance){
        this->entrances[gateId]=entrance;
    }

    void addExitGate(std::string gateId,Exit exit){
        this->exits[gateId]=exit;
    }

    ParkingFloor getParkingFloor(std::string levelId){
        return this->parkingFloors[levelId];
    }

    Entrance getEntranceGate(std::string gateId){
        return this->entrances[gateId];
    }

    Exit getExitGate(std::string gateId){
        return this->exits[gateId];
    }

};

ParkingLot *ParkingLot::parkingLotInstance = 0;