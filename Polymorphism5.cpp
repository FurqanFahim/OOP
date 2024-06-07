#include <iostream>
using namespace std;

class Product
{
public:
    virtual void showDetails() = 0; // pure virtual function
};

class Book : public Product
{
public:
    void showDetails()
    {
        cout << "\nThese are the details of the books." << endl;
    }
};

class Clothing : public Product
{
public:
    void showDetails()
    {
        cout << "\nThese are the details of the Cloths." << endl;
    }
};

class Electronics : public Product
{
public:
    void showDetails()
    {
        cout << "\nThese are the details of the Electronics." << endl;
    }
};

void productDetails(Product& prod) 
{
  prod.showDetails();
}

int main() 
{
  Book B1;
  Clothing C1;
  Electronics E1;

  productDetails(B1);
  productDetails(C1);
  productDetails(E1);

  return 0;
}
