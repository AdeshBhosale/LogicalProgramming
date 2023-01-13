#include<iostream>
using namespace std;

class Base1
{
    public:
      int A;

      Base1()
      {
        cout<<"Base1 constructor\n";
      }
      ~Base1()
      {
        cout<<"Base1 destructor\n";
      }
      void fun()
      {
        cout<<"Base1 fun\n";
      }

};

class Base2
{
    public:
      int I,J,K;
       Base2()
      {
        cout<<"Base2 constructor\n";
      }
      ~Base2()
      {
        cout<<"Base2 destructor\n";
      }
      void gun()
      {
        cout<<"Base2 gun\n";
      }

};

class Derived : public Base2, Base1
{
    public:
      int X,Y;
};
  Derived()
      {
        cout<<"constructor\n";
      }
      ~Derived()
      {
        cout<<"Base2 destructor\n";
      }
      void gun()
      {
        cout<<"Derived gun\n";
      }

int main()
{
    return 0;
}