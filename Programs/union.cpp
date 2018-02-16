#include<iostream>
	using namespace std;

	typedef union myunion
	{
		double PI;
		int B;
	}MYUNION;

	int main()
	{
		MYUNION numbers;
		numbers.PI = 3.14;
		numbers.B = 50;
        cout<<"\n******Program by Himanshu Beniwal *******";
		cout<<"\nValue of PI is : "<<numbers.PI;
		cout<<"\nValue of B variable is : "<<numbers.B;
        return 0;
	}
