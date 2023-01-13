#include<iostream.h>
using namespace std;

int main()
{
   int *p = NULL;


   p = new int[5];  // c++ & java
   //p = (int *)malloc(5 * sizeof(int));

   //use the memory

   delete p;   // There is no such line in java
   //free(p);


   return 0;
}



// int * p = NULL;

// p = new int;

// int * q = NULL;

// q = new int(5);

//int * X = NULL;

//  q = new int [5];



//delete p;

//delete q;

//delete []X;