#ifndef COUNTER_H
#define COUNTER_H


class Counter
{
    public:
        Counter();
        virtual ~Counter();
        void setCounter(int c);
        int getCounter();
        void operator ++();
        void operator--();
        void operator ++(int);
        void operator --(int);

    protected:

    private:
        int counter;
};

#endif // COUNTER_H
