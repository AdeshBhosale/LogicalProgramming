#include<iostream>

using namespace std;

 class Demo
{
public:
  int i;
  float f;
  double d;

  void Fun(int A)
  {
    cout<<"Inside the Fun\n";
    cout<<this->i<<"\n";
    cout<<this<<"\n";
  }

  void Gun(int A, int B)
  {
    cout<<"Inside Gun<<\n";
  }
};
int main()
{
  Demo obj1;
  Demo obj2;

  obj1.i = 101;
  obj2.i = 201;

  obj1.Fun(11);
  obj2.Fun(11);

  return 0;
}