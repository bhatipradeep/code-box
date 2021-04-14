#ifndef _IPAYMET_H
#define _IPAYMET_H
class IPayment
{
public:
    virtual ~IPayment(){};
    virtual void pay() = 0;
};

#endif