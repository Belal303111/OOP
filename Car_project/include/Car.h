#ifndef CAR_H
#define CAR_H
#include<iostream>
#include <string>

using namespace std;

class Car
{
  private:
        string name;
        string color;
      //  double price;
    public:
        Car();
        Car(string n,string c);
        virtual ~Car();
        static int counter;
         void setName(string n);
         void setColor(string n);
         string getName();
         string getColor();
};
#endif // CAR_H
