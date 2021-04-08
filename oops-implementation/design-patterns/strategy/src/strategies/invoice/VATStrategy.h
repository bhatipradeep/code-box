#include"IInvoice.h"

class VATStrategy:public IInvoice{
    public:
    int calculateTaxes(){
        //VAT based taxes calculating code here
        return 0;
    }
    int calculateTotalBill(){
        //VAT based total bill calculating code here
        return 0;
    }
};