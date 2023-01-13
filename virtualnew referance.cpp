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
  Derived dobj;
  Base &bref = dobj;  //upcasting

  bref->fun();//Base fun
  bref->gun();//Derived gun
  bref->sun();//base run
  bref->run();//Derived run
  //bp->mun();  //error

  
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