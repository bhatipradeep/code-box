#include <vector>
#include "src/strategies/invoice/IInvoice.h"
#include "src/strategies/payment/IPayment.h"

class Item
{
};

class ShoppingCart
{
private:
    std::vector<Item> items;
    IInvoice *invoiceAlgo;

public:
    ShoppingCart(IInvoice *invoiceAlgo)
    {
        this->invoiceAlgo = invoiceAlgo;
    }

    void addItems(Item item)
    {
        items.push_back(item);
    }

    void payment(IPayment *paymentAlgo){
        paymentAlgo->pay();
    }
};