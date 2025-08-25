#include "Employee.h"

Employee::Employee()
{
    //ctor
    salary=0.0;
    job="Unknown";
    Rank=0;
   // cout<<"The Employee data is created"<<endl;

}
Employee::Employee(string n,string g,int a,double s,string j,int r):Person(n,g,a)
{
    salary=s;
    job=j;
    Rank=r;
}
Employee::~Employee()
{
    //dtor
    // cout<<"The Employee data is Destroyed"<<endl;
}
void Employee::setSalary(double s)
{
    salary=s;
}
void Employee::setJob(string j)
{
    job=j;
}
void Employee::setRank(int r)
{
    Rank=r;
}
double Employee::getSalary()
{
    return salary;
}
string Employee::getJob()
{
    return job;
}
int Employee::getRank()
{
    return Rank;
}
void Employee::display()
{
    cout<<"The data of the Employee"<<endl;
    Person::display();
    cout<<"Salary: "<<salary<<"\nJob "<<job<<endl<<"Rank: "<<Rank <<endl;
}
