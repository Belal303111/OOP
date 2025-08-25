#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(string s,int a)
    {
        name=s;
        age=a;
    }
    friend void display(Person p);
    friend class Man;
};

void display(Person p)
{
    cout<<"The name is: "<<p.name<<endl<<"The age is: "<<p.age<<endl;
}

class Man
{
public:
    Man(Person p)
    {
        cout<<"This is my friend class"<<endl;
        cout<<p.age<<" "<<p.name<<endl;
    }

};

int main()
{
   Person p("Belal",22);
   display(p);
   Man m(p);
    return 0;
}
