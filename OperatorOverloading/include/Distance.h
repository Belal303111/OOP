#ifndef DISTANCE_H
#define DISTANCE_H


class Distance
{
    public:
        Distance(double f,double i);
        virtual ~Distance();
        void setFeet(double f);
        void setInch(double i);
        double getFeet();
        double getInch();
        void operator +(Distance object);
        void operator -(Distance object);

    protected:

    private:
        double feet;
        double inch;
};

#endif // DISTANCE_H
