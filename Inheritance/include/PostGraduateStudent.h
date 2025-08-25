#ifndef POSTGRADUATEStudenT_H
#define POSTGRADUATEStudenT_H

#include <Student.h>


class PostGraduateStudent : public Student
{
    public:
        PostGraduateStudent();
        PostGraduateStudent(string n,string g,int a,int l,string d,double gp,string rs);
        virtual ~PostGraduateStudent();
        void setResearchSubject(string s);
        string getResearchSubject();
        void display();

    protected:

    private:
        string research_subject;
};

#endif // POSTGRADUATEStudenT_H
