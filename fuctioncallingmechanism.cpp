#include<iostram>
using namespace std;
//call by value
void fun(int no)
{
  cout<<"Inside call by value : "<<no<<"\n"
  no++;
}

//call by address
void gun(int *p)
{
  cout<<"Inside call by address : "<<*p<<"\n"
  (*p)++;
}

//call by reference
void fun(int &ref)
{
  cout<<"Inside call by referance : "<<ref<<"\n"
  ref++;
}

int main()
{
  int i = 10;
  int j = 10;
  int k = 10;

  fun(i);
  cout<<i<<"\n";

  gun(&j);
  cout<<j<<"\n";

  sun(k);
  cout<<k<<"\n";

  return 0:
}