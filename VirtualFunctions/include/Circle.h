#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape.h>


class Circle : public Shape
{
    public:
        Circle();
        virtual ~Circle();
        void area();
        void Draw();

    protected:

    private:
};

#endif // CIRCLE_H
