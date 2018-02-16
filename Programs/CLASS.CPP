#include<conio.h>
#include<string.h>
#include<stdio.h>
#include <iostream>
using namespace std;
class student
{ public:
 int rollno,er;
 char name[20];
 void enrol()
 {
  er=rollno+1000;
 // cout<<"the enrollment is"<<er;
  }
}s1,s2,s3;

int main()
{
  s1.rollno=45;
 cout<<"Enter name of student   : ";
 gets(s1.name);
 s1.enrol();
 s2.rollno=46;
 strcpy(s2.name,"Manish");
 s2.enrol();
 s3.rollno=47;
 strcpy(s3.name,"Ajay");
 s3.enrol();
 cout<<"\n Roll no of First Student : "<<s1.rollno;
 cout<<"\n Name of First Student : " <<s1.name;
 cout<<"\n Enrollment number : "<<s1.er;
 cout<<"\n Roll no of Second Student : "<<s2.rollno;
 cout<<"\n Name of Second Student : " <<s2.name;
 cout<<"\n Enrollment number : "<<s2.er;
  cout<<"\n Roll no of Third Student : "<<s3.rollno;
 cout<<"\n Name of Third Student : " <<s3.name;
  cout<<"\n Enrollment number : "<<s3.er;

 getch();
return 0;
}
