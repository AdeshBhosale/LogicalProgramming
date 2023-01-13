#include<iostream>
using namespace std;

class Base
{
  public:
    int A,B;
    void fun()
    {
      cout<<"Base fun\n";  // defination of base class
    }
    virtual void gun()
    {
      cout<<"Base gun\n";
    }
     virtual void sun()
    {
      cout<<"Base sun\n";
    }
     virtual void run()
    {
      cout<<"Base run\n";
    }
};

class Derived : public Base
{
    public:
      int X,Y;
      void gun()
      {
        cout<<"Derived gun\n"; // redefination
      }
      virtual void run()
      {
        cout<<"Derived run\n";
      }
      
       virtual void mun()
      {
        cout<<"Derived mun\n";
      }
};

int main()
{
  Base *bp = NULL;
  bp = new Derived;  //upcasting
  // bp = (Derived *)malloc(sizeof(Derived));  
  bp = & dobj;
  
  bp = &dobj;    // upcasting

  bp->fun();
  bp->gun();
  bp->sun();
  bp->run();
  //bp->mun();

  
    return 0;
}



/*
// 1
Base *bp = NULL;
Derived dobj;
bp = & dobj;

// 2
Base *bp = new Derived;


// 3
Derived dobj;
Base &bref = dobj;


*/