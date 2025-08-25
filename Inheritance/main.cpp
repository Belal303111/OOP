#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Employee.h>
#include <PostGraduateStudent.h>

using namespace std;

int main()
{
    Student s;
    s.setName("Belal");
    s.setGender("Male");
    s.setAge(25);
   // s.display();
    Employee e;
   // e.display();
    Student s2("Belal","Male",22,4,"CS",75.7);
    s2.display();
    Employee e2("Belal","Male",22,289734729.8282,"Red Teaming Adminstrator",1);
    e2.display();
    PostGraduateStudent("Belal Nasser","Male",22,4,"CS",75.7,"Cyber Security");
    return 0;
}
