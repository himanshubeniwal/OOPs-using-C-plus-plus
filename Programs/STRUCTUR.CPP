#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

struct student
{
 int rollno;
 char name[20];
}s1,s2,s3;

void main()
{
 clrscr();
 s1.rollno=45;
 cout<<"Enter name of student   : ";
 gets(s1.name);
 s2.rollno=46;
 strcpy(s2.name,"Satyam");
 s3.rollno=47;
 strcpy(s3.name,"Ajay");
 cout<<"\n Roll no of First Student : "<<s1.rollno;
 cout<<"\n Name of First Student : " <<s1.name;
 cout<<"\n Roll no of Second Student : "<<s2.rollno;
 cout<<"\n Name of Second Student : " <<s2.name;
 cout<<"\n Roll no of Third Student : "<<s3.rollno;
 cout<<"\n Name of Third Student : " <<s3.name;
 getch();
}
