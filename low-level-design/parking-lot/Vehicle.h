#include"ParkingTicket.h"
#include"EnumsAndConstants.h"
#include<string>

class Vehicle{
    private:
    std::string licensePlate;
    VehicleType vehicleType;
    ParkingTicket parkingTicket;


    public:
    Vehicle(){};
    Vehicle(std::string licensePlate,VehicleType vehicleType){
        this->licensePlate = licensePlate;
        this->vehicleType = vehicleType;
    }

    std::string getLicensePlate(){
        return this->licensePlate;
    }

    VehicleType getVehicleType(){
        return this->vehicleType;
    }


    void assignParkingTicket(ParkingTicket parkingTicket){
        this->parkingTicket = parkingTicket;
    }

    ParkingTicket getParkingTicket(){
        return this->parkingTicket;
    }

    


};