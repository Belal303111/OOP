#include <iostream>
#include <Distance.h>

using namespace std;

int main()
{
    Distance d1(3.4,5.9);
    Distance d2(2.7,3.8);
    cout<<d1.getFeet()<<endl;
    cout<<d1.getInch()<<endl;
    cout<<"After summation"<<endl;
    d1+d2;
    cout<<d1.getFeet()<<endl;
    cout<<d1.getInch();
    return 0;
}
