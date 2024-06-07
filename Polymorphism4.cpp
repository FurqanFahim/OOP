#include <iostream>
using namespace std;

class Message
{
public:
    virtual void sendMessage() = 0; // Pure virtual function
};

class TextMessage : public Message
{
public:
    void sendMessage()
    {
        cout << "\nText message has been sent." << endl;
    }
};

class ImageMessage : public Message
{
public:
    void sendMessage()
    {
        cout << "\nImage message has been sent." << endl;
    }
};

class VideoMessage : public Message
{
public:
    void sendMessage()
    {
        cout << "\nVideo message has been sent." << endl;
    }
};

void callMessage(Message& msg) 
{
  msg.sendMessage();
}

int main() 
{
  TextMessage text;
  ImageMessage image;
  VideoMessage video;

  callMessage(text);
  callMessage(image);
  callMessage(video);

  return 0;
}
