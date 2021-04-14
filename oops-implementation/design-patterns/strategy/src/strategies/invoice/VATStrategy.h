
#ifndef _VATSTRATEGY_H
#define _VATSTRATEGY_H
#include"IInvoice.h"
#include<iostream>
class VATStrategy:public IInvoice{
    public:
    int calculateTaxes(){
        std::cout<<"VAT based calculateTaxes applied"<<std::endl;
        return 0;
    }
    int calculateTotalBill(){
        std::cout<<"VAT based calculateTaxes applied"<<std::endl;
        return 0;
    }
};


#endif