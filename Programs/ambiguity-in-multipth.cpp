   #include<iostream>
       #include<conio.h>
using namespace std;
       class ClassA
       {
              public:
              int a;
              void show()
              {
                  cout<<"\nCurrently in A ";
              }
       };

       class ClassB : public ClassA
       {
              public:
              int b;
              void show()
              {
                  cout<<"\ncurrently in B :  ";
              }
       };
       class ClassC : public ClassA
       {
              public:
              int c;
              void show()
              {
                  cout<<"\nCurrently in C : ";
              }
       };

       class ClassD : public ClassB, public ClassC
       {
              public:
              int d;
              void show()
              {
                  cout<<"\nCurrently in D :";
              }
       };

       int main()
       {

			  ClassD obj;

			  //obj.a = 10;                   //Statement 1, Error occur
			  //obj.a = 100;                 //Statement 2, Error occur

			  obj.ClassB::a = 10;        //Statement 3
			  obj.ClassC::a = 100;      //Statement 4

			  obj.b = 20;
			  obj.c = 30;
			  obj.d = 40;

			  cout<< "\n A from ClassB  : "<< obj.ClassB::a;
			  cout<< "\n A from ClassC  : "<< obj.ClassC::a;
cout<<"\nShow Function from B Class";
obj.ClassB::show();

cout<<"\nShow Function from C Class";
obj.ClassC::show();

			  cout<< "\n B : "<< obj.b;
			  cout<< "\n C : "<< obj.c;
			  cout<< "\n D : "<< obj.d;
return 0;
	   }
