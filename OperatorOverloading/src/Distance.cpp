#include "Distance.h"
#include <iostream>

using namespace std;

Distance::Distance(double f,double i)
{
    //ctor
    feet=f;
    inch=i;
}

Distance::~Distance()
{
    //dtor
}
void Distance::setFeet(double f)
{
    feet=f;
}
void Distance::setInch(double i)
{
    inch=i;
}
double Distance::getFeet()
{
    return feet;
}
double Distance::getInch()
{
    return inch;
}
void Distance::operator +(Distance object)
{
    feet=feet+object.getFeet();
    inch=inch+object.getInch();
    if(inch>=12.0)
    {
        inch-=12.0;
        feet++;
    }
}
void Distance::operator -(Distance object)
{
    feet=feet-object.getFeet();
    inch=inch-object.getInch();
}
