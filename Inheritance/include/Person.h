#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
    public:
        Person();
        Person(string n,string g,int a);
        virtual ~Person();
        void setName(string n);
        void setGender(string g);
        void setAge(int a);
        string getName();
        string getGender();
        int getAge();
        void display();

    protected:
        string name;
        string gender;
        int age;
    private:

};

#endif // PERSON_H
