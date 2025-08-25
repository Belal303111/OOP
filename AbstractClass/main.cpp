#include <iostream>

using namespace std;

class Shape
{
  protected:
        string color;
  public:
    Shape(string c)
    {
        color=c;
    }
    virtual int area()=0;   //pure virtual function
    virtual void draw()=0;  //pure virtual function
};
class Rectangle : public Shape
{
private:
    int length,width;
public:
    Rectangle(int l,int w,string c):Shape(c)
    {
        length=l;
        width=w;
    }
   int area()
    {
        return length*width;
    }
   void draw()
    {
        cout<<"The color of the Rectangle is: "<<color<<endl;
    }
};

int main()
{
    Rectangle r(3,4,"RED");
    cout<<r.area()<<endl;
    r.draw();
    return 0;
}
