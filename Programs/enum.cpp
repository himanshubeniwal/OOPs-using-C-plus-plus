#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout<<"\n******Program by Himanshu Beniwal *******";
    cout << "\nDay is " << today+1<<" from given data.";
    return 0;
}
