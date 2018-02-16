#include<iostream>
	#include<conio.h>
	#include<string.h>
using namespace std;
	class Student
	{

		  int Roll;
		  char Name[20];
		  float Marks;

		  public:

		  Student(int r,char nm[],float mks)           // Constructor 1
		  {
				Roll = r;
				strcpy(Name,nm);
				Marks = mks;
		  }

		  Student(int r,float mks,char nm[])           // Constructor 2
		  {
				Roll = r;
				strcpy(Name , nm);
				Marks = mks;
		  }

		  Student(char nm[],int r,float mks)           // Constructor 3
		  {
				Roll = r;
				strcpy(Name , nm);
				Marks = mks;
		  }

		  void Display()
		  {
				cout<<"\n\t"<<Roll<<"\t"<<Name<<"\t"<<Marks;
		  }

	};


	int main()
	{

		  Student S1(101,"Kumar",78.53);                 //Statement 1
		  Student S2("Sumit",102,89.27);                 //Statement 2
		  Student S3(103,67.38,"Kunal");                 //Statement 3

		  S1.Display();
		  S2.Display();
		  S3.Display();
return 0;
	}
