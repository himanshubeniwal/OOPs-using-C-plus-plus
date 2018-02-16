#include <iostream>
using namespace std;

int main()
{
   unsigned int num1 = 12; // 12 = 1100
   int num2 = 0;
cout<<"\n******Program by Himanshu Beniwal *******";
cout<<"\n\n\n-----Now Right (<<) Shift Operator-----";

   num2 = num1 >> 2; // 3 = 0011
   cout << "Value of num2 is: " << num2 << endl ;
cout<<"\n-----Now Left (>>) Shift Operator-----";
   unsigned int num3 = 12; // 12 = 0000 1100
   int num4 = 0;

   num4 = num3 << 2; // 48 = 0011 0010
   cout << "Value of num4 is: " << num4 << endl ;


}
