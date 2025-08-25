#include "Student.h"

Student::Student()
{
    //ctor
    level=0;
    depart="Unknown";
    GPA=0.0;
   // cout<<"The Studentt data is created"<<endl;

}
Student::Student(string n,string g,int a,int l,string d,double gp):Person(n,g,a)
{
    level=l;
    depart=d;
    GPA=gp;
}
Student::~Student()
{
    //dtor
    // cout<<"The Studentt data is Destroyed"<<endl;
}
void Student::setLevel(int s)
{
    level=s;
}
void Student::setDepart(string d)
{
    depart=d;
}
void Student::setGPA(double g)
{
    GPA=g;
}
int Student::getLevel()
{
    return level;
}
string Student::getDepart()
{
    return depart;
}
double Student::getGPA()
{
    return GPA;
}
void Student::display()
{
    cout<<"The data of the Student"<<endl;
    Person::display();
    cout<<"Level: "<<level<<endl<<"Department: "<<depart<<endl<<"GPA: "<<GPA<<endl;
}
