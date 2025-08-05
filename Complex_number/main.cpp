#include <iostream>

using namespace std;

class Complex{
//private:
    double real;
    double imagen;
public:
    ~Complex()  //destractor
    {
        cout<<"the object is destroyed"<<endl;
    }
     Complex(double r,double i)  //constructro
     {
        this -> real=r;
        this -> imagen=i;
     }
     void setReal(double r)
     {
        real=r;
     }
     void setImagen(double i)
     {
        imagen=i;
     }
     double getReal()
     {
         return real;
     }
     double getImagin()
     {
         return imagen;
     }
     void SumTowComplex(Complex c)
     {
          real=real + c.getReal();
          imagen=imagen + c.getImagin();
     }
      void SubtractTowComplex(Complex c)
     {
          real=real - c.getReal();
          imagen=imagen - c.getImagin();
     }
      void divideTowComplex(Complex c)
     {
        if(c.getReal()!=0)
          real=real / c.getReal();
        if(c.getImagin()!=0)
          imagen=imagen / c.getImagin();
     }
      void MultiplyTowComplex(Complex c)
     {
          real=real * c.getReal();
          imagen=imagen * c.getImagin();
     }
     void printComplex()
     {
         cout<<"The complex number is : "<<real<<" + "<<imagen<<" I"<<endl;
     }
     void setComplex(double x,double y=0)
     {
         real=x;
         imagen=y;
     }
     void setComplex(double x)
     {
         real=imagen=x;
     }
};

int main()
{
    cout << "Hello, this is my OOP App" << endl;
    Complex C1= Complex(22.5,12.7);
    Complex C2= Complex(43.2,18.3);
    C1.SumTowComplex(C2);
    C1.printComplex();
  //  cout<<C1.real;  this a private data and can't be used
  //  cout<<C2.imagen;  this a private data and can't be used
  cout<<endl;
    C1.setComplex(8.9,5.4);
    C1.printComplex();
  //  C1.setComplex(8.9);
   // C1.printComplex();
    return 0;
}
