class IPayment{
    public:
    virtual ~IPayment(){};
    virtual void pay() = 0;
};