#include <iostream>
#include<Car.h>

using namespace std;

int main()
{
    Car c1;
    cout<<Car::counter<<endl;
    Car c2;
    cout<<Car::counter;
    return 0;
}
