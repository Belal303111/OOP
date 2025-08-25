#include <iostream>
#include <Shape.h>
#include <Rectangel.h>
#include <Circle.h>
using namespace std;

int main()
{
    Shape* shp_ptr;
    Rectangel rc;
    shp_ptr=&rc;
    shp_ptr->area(3,9);
    shp_ptr->Draw();
    Circle c;
    shp_ptr->area(8.9);
    shp_ptr->Draw();
    return 0;
}
