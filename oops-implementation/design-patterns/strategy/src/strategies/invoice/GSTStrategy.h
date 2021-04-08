#include"IInvoice.h"

class GSTStrategy:public IInvoice{
    public:
    int calculateTaxes(){
        //GST based taxes calculating code here
        return 0;
    }
    int calculateTotalBill(){
        //GST based total bill calculating code here
        return 0;
    }
};