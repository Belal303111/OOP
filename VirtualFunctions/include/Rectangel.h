#ifndef RECTANGEL_H
#define RECTANGEL_H

#include <Shape.h>


class Rectangel : public Shape
{
    public:
        Rectangel();
        virtual ~Rectangel();
        void area();
        void Draw();

    protected:

    private:
};

#endif // RECTANGEL_H
