   #include<iostream>
       #include<conio.h>
using namespace std;
       class ClassA
       {
              public:
              int a;
             void Area(int r)           //Overloaded Function 1
	              {
	                    cout<<"\n\tArea of Circle is : "<<3.14*r*r;
	              }
       };

       class ClassB : public ClassA
       {
              public:
              int b;
              void Area(float l,float b)
                  {
                        cout<<"\n\tArea of Rectangle is : "<<l*b;
                  }
       };
       class ClassC : public ClassA
       {
              public:
              int c;
               void Area(int l,int b)           //Overloaded Function 2
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
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
cout<<"\nShow Function from B Class";
obj.ClassB::Area(2.3,3.2);
cout<<"\nShow Function from B Class";
obj.ClassB::Area(2,3);
cout<<"\nShow Function from C Class";
obj.ClassC::Area(5.3,6.3);
cout<<"\nShow Function from C Class";
obj.ClassC::Area(2,3);
cout<<"\nShow function from D class ";
obj.ClassD::show();
return 0;
	   }
