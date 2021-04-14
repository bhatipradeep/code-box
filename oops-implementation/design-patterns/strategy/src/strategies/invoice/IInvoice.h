#ifndef _IINVOICE_H
#define _IINVOICE_H

class IInvoice{
    public:
    virtual ~IInvoice(){};
    virtual int calculateTaxes()=0;
    virtual int calculateTotalBill()=0; 

};

#endif