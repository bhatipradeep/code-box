#include<string>
#include"Account.h"
#include"EnumsAndConstants.h"

class Gate{
    private:
    std::string gateId;
    ParkingAttendent parkingAttendent;

    public:
    Gate(std::string gateId){
        this->gateId = gateId;
    }

    std::string getGateId(){
        return this->gateId;
    }

    ParkingAttendent getParkingAttendent(){
        return this->parkingAttendent;
    }

};

class Entrance : public Gate{


    bool assignVehicleToParkingSpot(Vehicle *vehicle){
        //finding nearest parking spot and assigning vehicle to it
        //return false if spot not available
    }

    void processVehicleEntry(Vehicle *vehicle){
        if(this->assignVehicleToParkingSpot(vehicle)){

            //here parking attendent gives(assign) parking ticket to vehicle
            this->getParkingAttendent().processVehicleEntry(vehicle);
        }
    }
};

class Exit : public Gate{
    void processVehicleExit(Vehicle vehicle, PaymentType paymentType){
        this->getParkingAttendent().processPayment(vehicle,paymentType);
    }
};