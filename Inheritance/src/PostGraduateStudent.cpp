#include "PostGraduateStudent.h"

PostGraduateStudent::PostGraduateStudent(string n,string g,int a,int l,string d,double gp,string rs):
    Student(n,g,a,l,d,gp)
{
    //ctor
    research_subject=rs;
}
PostGraduateStudent::PostGraduateStudent()
{
    research_subject="Unknown";
}
PostGraduateStudent::~PostGraduateStudent()
{
    //dtor
}
void PostGraduateStudent::setResearchSubject(string s)
{
    research_subject=s;
}
string PostGraduateStudent::getResearchSubject()
{
    return research_subject;
}
void PostGraduateStudent::display()
{
    Student::display();
    cout<<"ResearchSubject"<<research_subject<<endl;
}
