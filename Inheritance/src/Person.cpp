#include "Person.h"
#include <iostream>

using namespace std;
Person::Person()
{
    //ctor
    name="Unknown";
    gender="Male or Female";
    age=0;
  //  cout<<"The Person data is created"<<endl;
}
Person::Person(string n,string g,int a)
{
    name=n;
    gender=g;
    age=a;
}

Person::~Person()
{
    //dtor
   // cout<<"The Person data is Destroyed"<<endl;
}
void Person::setName(string n)
{
    name=n;
}
void Person::setGender(string n)
{
    gender=n;
}
void Person::setAge(int a)
{
    age=a;
}
string Person::getName()
{
    return name;
}
string Person::getGender()
{
    return gender;
}
int Person::getAge()
{
    return age;
}
void Person::display()
{
   // cout<<"The data of the person"<<endl;
    cout<<"Name: "<<name<<endl<<"Gender: "<<gender<<endl<<"Age: "<<age<<endl;
}
