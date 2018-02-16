#include <iostream>
#include<conio.h>
int m=30;
int k;                        //global
void main()
{  clrscr();
   m=20;
   cout <<"\n value of m : "<<m;
   cout <<"\n VLUE WITH SCOPE RESOLUTION : "<<::m;       // local variable
   {
    k=m;
    m=10;
    int k=50;
    cout <<"\n Inner Block : ****** ";
    cout <<"\n K= "<<k;
    cout <<"\n value of m "<<m;
    cout <<"\n M= "<<m;
    cout <<"\n with Scope Operator :: m = "<<::m;//:: to access global value
    }
   cout <<"\n WE are in outer block ****** ";
   cout <<"\n m = "<<m;
   cout <<"\n Wtih Scope Operator :: m = "<<::m;

}
