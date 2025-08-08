#include "Car.h"
#include <string>

int Car::counter=0;

Car::Car():name("Toyota"),color("Red")
{
    //ctor
    counter++;
}
Car::Car(string n,string c):name(n),color(c)
{
    counter++;
}
Car::~Car()
{
    //dtor
    counter--;
}
void Car::setName(string n)
{
    name=n;
}
void Car:: setColor(string n)
{
    color=n;
}
string Car::getName()
{
    return name;
}
string Car:: getColor()
{
    return color;
}
