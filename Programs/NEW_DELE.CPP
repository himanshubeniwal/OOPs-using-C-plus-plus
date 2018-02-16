#include <iostream>

using namespace std;

int main()
{
   int n, *pointer, c;
   cout<<"\n******Program by Himanshu Beniwal *******";
   cout << "\nInput an integer\n";
   cin >> n;

   pointer = new int[n];

   cout << "Input " << n << " integers\n";

   for (c = 0; c < n; c++)
      cin >> pointer[c];

   cout << "Elements entered by you are\n";

   for (c = 0; c < n; c++)
      cout << pointer[c] << endl;

   delete[] pointer;

   return 0;
}
