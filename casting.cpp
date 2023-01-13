#include<iostream>
using namespace std;

class base
{
  public:
    int A,B;
};

class Derived : public Base
{
    public:
      int X,Y;
};

int main()
{
    Base * bp = NULL;
    Derived *dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;  // no casting  allowed
    dp = &dobj;  // no casting  allowed
    bp = &dobj;  //upcasting
   // dp = &bobj;  //downcasting

    return 0;
}