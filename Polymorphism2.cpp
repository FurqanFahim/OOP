#include <iostream>
using namespace std;

class Notification
{
public:
    virtual void Send() = 0; //Pure virtual function
};

class EmailNotification : public Notification
{
public:
    void Send()
    {
        cout << "\nNotification from email" << endl;
    }
};

class SMSNotification : public Notification
{
public:
    void Send()
    {
        cout << "\nNotification from SMS" << endl;
    }
};

class PushNotification : public Notification
{
public:
    void Send()
    {
        cout << "\nPop-Up from push notification " << endl;
    }
};

void NotificationArrived(Notification& noti) 
{
  noti.Send();
}

int main() {
  EmailNotification email1;
  SMSNotification sms1;
  PushNotification popup1;

  NotificationArrived(email1);
  NotificationArrived(sms1);
  NotificationArrived(popup1);

  return 0;
}
