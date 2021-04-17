#include<map>
#include"EnumsAndConstants.h"

class ParkingRate{
    private:
    std::map<ParkingSpotType,double>parkingSpotPrices;

    public:
    ParkingRate(){
        //can have db calls for current parking rates

    };

    //for changes from admin
    void updateParkingRate(ParkingSpotType parkingSpotType,double newPrice){
        this->parkingSpotPrices[parkingSpotType]=newPrice;
    }
};