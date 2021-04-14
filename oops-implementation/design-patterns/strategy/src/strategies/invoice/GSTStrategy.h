#ifndef _GSTSTRATEGY_H
#define _GSTSTRATEGY_H


#include"IInvoice.h"
#include<iostream>
class GSTStrategy:public IInvoice{
    public:
    int calculateTaxes(){
        std::cout<<"GST based calculateTaxes applied"<<std::endl;
        return 0;
    }
    int calculateTotalBill(){
        std::cout<<"GST based calculateTotalBill applied"<<std::endl;
        return 0;
    }
};


#endif