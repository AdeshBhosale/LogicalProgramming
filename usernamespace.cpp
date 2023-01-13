#include<iostream>
//using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
          int i,j;
          void fun()
          {
            std::cout<<"Inside fun of Demo from Marvellous\n";
          }
    };
    class Hello
    {
        public:
          int X,y;
    };

}
namespace Infosystem
{
    class Demo
    {
        public:
          int a,b;
          void fun()
          {
            std::cout<<"Inside fun og Demo from Infosystems\n";
          }

    };
}

int main()
{
   Marvellous::Demo obj1;
   obj1.fun();
   Infosystem::Demo obj2;
   obj2.fun();

   using namespace Marvellous;

   Hello hobj;
   Demo obj3;

    return 0;
}