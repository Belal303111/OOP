#ifndef Student_H
#define Student_H

#include <Person.h>


class Student : public Person
{
    public:
        Student();
        Student(string n,string g,int a,int l,string d,double gp);
        virtual ~Student();
        void setLevel(int s);
        void setDepart(string d);
        void setGPA(double g);
        int getLevel();
        string getDepart();
        double getGPA();
        void display();

    protected:
        int level;
        string depart;
        double GPA;

    private:

};

#endif // Student_H
