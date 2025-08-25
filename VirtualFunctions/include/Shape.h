#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;

class Shap
{
    public:
        Shape(string c);
        virtual ~Shape();
        virtual void area();
        virtual void Draw();

    protected:

    private:
        string color;
};

#endif // SHAP_H
