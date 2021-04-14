#ifndef ___DEBITCARDSTRATEGY_H
#define ___DEBITCARDSTRATEGY_H

#include"IPayment.h"
#include<iostream>
class DebitCardStrategy : public IPayment{
    public:
    void pay(){
        std::cout<<"DebitCard Payment done"<<std::endl;
    }
};

#endif