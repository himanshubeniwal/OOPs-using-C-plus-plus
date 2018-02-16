#include<iostream>

using namespace std;
	class Student
	{     int a,b;
	float c,d;

		  public:
      Student(int a,int b)
      {
          cout<<"\nA : "<<a<<"\n B : "<<b;
      }
      Student(float c,float d)
      {
          cout<<"\nC : "<<c<<"\n D : "<<d;
      }

	};


	int main()
	{

		  Student S1(1,2);
		  Student S2(3.2f,4.2f);

return 0;
	}
