#include <string>
#include <iostream>
#include <ctime>
#include"ParkingTicket.h"
#include"Vehicle.h"

class Account{
    private:
    std::string name;
    std::string emailId;
    std::string password;
    
    public:
    Account(){
        std::cout<<"Account class initialized";
    }


    std::string getName(){
        return this->name;
    }

    std::string getEmailId(){
        return this->emailId;
    }

    std::string getPassword(){
        return this->password;
    }

    void setName(std::string name){
        this->name=name;
    }

    void setEmailId(std::string emailId){
        this->emailId = emailId;
    }

    void setPassword(std::string password){
        this->password = password;
    }

};


class ParkingAttendent : public Account{
    private:

    public:

    void processVehicleEntry(Vehicle vehicle){
        std::cout<<"DB calls are made. Add Parking ticket to vehicle";
    }

    void processPayment(Vehicle vehicle,PaymentType paymentType){
        std::cout<<"Processing vehicle ticket";

        time_t endTime;
        endTime = time_t(NULL);

        vehicle.getParkingTicket().updateEndTime(endTime);
        vehicle.getParkingTicket().updateTotalCost();

        int totalCost = vehicle.getParkingTicket().getTotalCost();

        switch (paymentType)
        {
        case CREDITCARD:
            std::cout<<"Credit Card Payment Algo. IPayment can be used";
        
        case DEBITCARD:
            std::cout<<"Debit Card Payment Algo. IPayment can be used";

        case CASH:
            std::cout<<"Cash Payment Algo. IPayment can be used";

        default:
            std::cout<<"InvalidPayment Type";
        }
    }
};