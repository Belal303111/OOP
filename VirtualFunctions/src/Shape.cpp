#include "Shape.h"
 
Shape::Shape(string c)
{
    //ctor
    color=c;
}

Shape::~Shape()
{
    //dtor
}
void Shape::area()
{
    cout<<"The area of the Shape class is:"<<0.0<<endl;
}
void Shape::Draw()
{
    cout<<"The draw of the Shape"<<endl;
}
