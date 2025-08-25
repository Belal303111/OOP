#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <Person.h>

class Employee :
    public Person
{
    public:
        Employee();
        Employee(string n,string g,int a,double s,string j,int r);
        virtual ~Employee();
        void setSalary(double s);
        void setJob(string j);
        void setRank(int r);
        double getSalary();
        string getJob();
        int getRank();
        void display();

    protected:
        double salary;
        string job;
        int Rank;

    private:
};

#endif // EMPLOYEE_H
