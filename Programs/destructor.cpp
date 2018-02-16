#include <iostream>
using namespace std;
class A
{
    public:
A()
 {
  cout << "Constructor called\n";
 }

~A()
 {
  cout << "Destructor called\n";
 }
};

int main()
{   cout<<"\nPRogram by Himanshu Beniwal \n";
 A obj1;   // Constructor Called
 int x=1;
 if(x)
  {
   A obj2;  // Constructor Called
  }   // Destructor Called for obj2
} //  Destructor called for obj1
