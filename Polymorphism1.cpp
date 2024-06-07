#include <iostream>
using namespace std;

class ElectronicDevice
{
public:
    virtual void PowerOn() = 0;
};

class Laptop : public ElectronicDevice
{
public:
    void PowerOn()
    {
        cout << "\nLaptop class PowerON" << endl;
    }
};

class SmartPhone : public ElectronicDevice
{
public:
    void PowerOn()
    {
        cout << "\nSmartPhone class PowerON" << endl;
    }
};

class Tablet : public ElectronicDevice
{
public:
    void PowerOn()
    {
        cout << "\nTablet class PowerON" << endl;
    }
};

void TurnOnDevice(ElectronicDevice& device) 
{
  device.PowerOn();
}

int main() {
  Laptop laptop;
  SmartPhone smartphone;
  Tablet tablet;

  TurnOnDevice(laptop);
  TurnOnDevice(smartphone);
  TurnOnDevice(tablet);

  return 0;
}
