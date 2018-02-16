#include <iostream>
using namespace std;
int main()
{   char input, alphabet = 'A';
    cout<<"\n******Program by Richa Agrawal *******";
    cout << "\n Enter the uppercase character you want to print in the last row: ";
    cin >> input;
   for(int i = 1; i <= (input-'A'+1); ++i)
    {   for(int j = 1; j <= i; ++j)
        {     cout << alphabet << " ";     	 }
        ++alphabet;
  	cout << endl;
    }
}
