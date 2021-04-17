#include <string>
#include <ctime>
#include "EnumsAndConstants.h"
class ParkingTicket
{
private:
    std::string ticketId;
    ParkingSpotType parkingSpotType;
    time_t startTime;
    time_t endTime;
    int totalCost = 0;

public:
    ParkingTicket(){};
    ParkingTicket(std::string ticketId, ParkingSpotType parkingSpotType, time_t startTime)
    {
        this->ticketId = ticketId;
        this->parkingSpotType = parkingSpotType;
        this->startTime = startTime;
    }

    void updateTotalCost(){};

    int getTotalCost(){
        return this->totalCost;
    };
    
    void updateEndTime(time_t endTime){
        this->endTime = endTime;
    }
};