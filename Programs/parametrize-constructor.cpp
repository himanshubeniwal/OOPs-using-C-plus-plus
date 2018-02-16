#include <iostream>
using namespace std;

 class Calc
 {

  public:
      int val2;
  Calc(int x)
  {
   val2=x;
 }
};

 int main()
 {  cout<<"\nProgram by Himanshu Beniwal \n";
  Calc c1(10);
  Calc c2(20);
  Calc c3(30);
  cout << c1.val2<<endl;
  cout << c2.val2<<endl;
  cout << c3.val2<<endl;
}
