#include <iostream>
using namespace std;
char c = 'a';     // global variable
int main()
{
  char c = 'b';   //local variable
  cout<<"\n******Program by Himanshu Beniwal *******\n";
  cout << "Local  variable: " << c << "\n";
  cout << "Global variable: " << ::c << "\n";  //using scope resolution operator

  return 0;
}
