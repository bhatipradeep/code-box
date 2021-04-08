class IInvoice{
    public:
    virtual ~IInvoice(){};
    virtual int calculateTaxes()=0;
    virtual int calculateTotalBill()=0; 

};