#include "Counter.h"

Counter::Counter()
{
    //ctor
}

Counter::~Counter()
{
    //dtor
}
void Counter::setCounter(int c)
{
    counter=c;
}
int Counter::setCounter()
{
   return counter;
}
void Counter::operator ++()   //prefex
{
    ++counter;
}
void Counter::operator --()
{
    --Counter;
}
void Counter::operator ++(int)  //postfex
{
    coutner++;
}
void Counter::operator -- (int)
{
    coutner--;
}
