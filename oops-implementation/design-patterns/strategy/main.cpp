#include<iostream>
#include"src/ShoppingCart.h"
#include"src/strategies/invoice/GSTStrategy.h"
#include"src/strategies/invoice/VATStrategy.h"
#include"src/strategies/payment/CreditCardStrategy.h"
#include"src/strategies/payment/DebitCardStrategy.h"

int main(){
    GSTStrategy gstAlgo;
    VATStrategy vatAlgo;

    CreditCardStrategy creditCardAlgo;
    DebitCardStrategy debitCardAlgo;

    ShoppingCart cart1(&gstAlgo);
    ShoppingCart cart2(&vatAlgo);

    cart1.totalBill();
    cart2.totalBill();

    cart1.payment(&creditCardAlgo);
    cart1.payment(&debitCardAlgo);
    

}