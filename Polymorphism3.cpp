#include <iostream>
using namespace std;

class PaymentMethod
{
public:
    virtual void processPayment() = 0;
};

class CreditCard : public PaymentMethod
{
public:
    void processPayment()
    {
        cout << "\nPayment is made through credit card" << endl;
    }
};

class PayPal : public PaymentMethod
{
public:
    void processPayment()
    {
        cout << "\nPayment is made through Paypal" << endl;
    }
};

class Bitcoin : public PaymentMethod
{
public:
    void processPayment()
    {
        cout << "\nPayment is made through Bitcoin" << endl;
    }
};

void callPayMethod(PaymentMethod& PayMeth) 
{
  PayMeth.processPayment();
}

int main() 
{
  CreditCard C1;
  PayPal P1;
  Bitcoin B1;

  callPayMethod(C1);
  callPayMethod(P1);
  callPayMethod(B1);

  return 0;
}
