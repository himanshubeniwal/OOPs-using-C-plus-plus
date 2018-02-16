#include <iostream>
#include<conio.h>
using namespace std;
class Base
{
 public:
 void show()
 {
  cout<<"Base class\n";
 }
};
class Derived:public Base
{
 public:
 void show()
 {
  cout<<"Derived Class\n";
 }
};

int main()
{   cout<<"\nPRogram by Himanshu Beniwal \n";
 Base b;       //Base class object
 Derived d;  //Derived class object
 b.show();    //Early Binding Ocuurs
 d.show();
}
