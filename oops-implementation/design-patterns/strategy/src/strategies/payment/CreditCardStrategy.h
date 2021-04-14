#ifndef _CREDITCARDSTRATEGY_H
#define _CREDITCARDSTRATEGY_H

#include"IPayment.h"
#include<iostream>

class CreditCardStrategy : public IPayment{
    public:
    void pay(){
        std::cout<<"CreditCard Payment done"<<std::endl;
    }
};

#endif