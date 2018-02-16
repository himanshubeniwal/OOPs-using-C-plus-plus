#include<iostream>
	       #include<conio.h>
using namespace std;
	       class CalculateArea
	       {

	              public:
	              void Area(int r)           //Overloaded Function 1
	              {
	                    cout<<"\n\tArea of Circle is : "<<3.14*r*r;
	              }
	              void Area(int l,int b)           //Overloaded Function 2
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
	              }
	              void Area(float l,int b)           //Overloaded Function 3
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
	              }
	              void Area(int l,float b)           //Overloaded Function 4
	              {
	                    cout<<"\n\tArea of Rectangle is : "<<l*b;
	              }
                  void Area(float l,float b)
                  {
                        cout<<"\n\tArea of Rectangle is : "<<l*b;
                  }
	       };
	       int main()
	       {
	              CalculateArea C;
	              C.Area(5);        //Statement 1
	              C.Area(5,3);      //Statement 2
	              C.Area(7,2.1f);    //Statement 3
	              C.Area(4.7f,2);    //Statement 4
	              C.Area(2.1f,2.1f);
return 0;
	       }
