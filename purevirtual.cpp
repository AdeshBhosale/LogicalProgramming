#include<iostream>
using namespace std;

class Circle
{
    public:     //access specifier
      float PI;  //characteristics
      float Radius;

      Circle() // default constructor
      {
        PI = 3.14;
        Radius = 0.0;
      }
      Circle(float A, float B)//parametrised constructor
      {
        PI = A;
        Radius = B;
      }
      void Display()//concrete method
      {
        cout<<"Value of radius is : "<<Radius<<"\n";
      }
      virtual float Area() = 0;//ABSTRACTE METHOD
      virtual float Circumfarance() = 0;//ABSTRACTE METHOD

};
class Marvellous : public Circle
{
    public:
    Marvellous() : Circle()
    {

    }
    Marvellous(float X, float Y) : Circle (X,Y)
    {

    }

       float Area()// Concrete method
       {
          float Ans = PI * Radius * Radius;
          return Ans;
       }
       float Circumfarance()//concrete method
       {
        float Ans = 0.0;
        Ans = 2 * PI * Radius;
        return Ans;
       }
};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.89);

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is : "<<fret<<"\n";

    fret = mobj2.Circumfarance();
    cout<<"Circumfarance is : "<<fret<<"\n";


    return 0;
}