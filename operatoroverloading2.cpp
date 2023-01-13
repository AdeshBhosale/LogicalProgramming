#include<iostream>
using namespace std;

class Demo
{
  public:
    int A,B;
    Demo(int i, int j)
    {
      A = i;
      B = j;
    }


};
Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator function\n";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);

}

int main()
{
  Demo X(10,20);
  Demo Y(20,30);
  Demo Ans(0,0);

  Ans = X + Y;

  cout<<Ans.A<<"\n";
  cout<<Ans.B<<"\n";


  return 0;
}