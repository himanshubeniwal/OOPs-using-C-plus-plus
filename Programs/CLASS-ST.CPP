#include<iostream.h>

class student
{
 int rollno;
 char name[10];
 char add[10];
 public:
 void getdata()
 {
  cout<<"\n Enter Roll NO : ";
  cin>>rollno;
  cout<<"\n Enter Name :  ";
  cin>>name;
  cout<<"\n Enter Address :  ";
  cin>>add;
 }
 void display()
 {
  cout<<"\n ******* Student data ********* "<<endl;
  cout<<"\n Roll No. : "<<rollno;
  cout<<"\n Name : "<<name;
  cout<<"\n Address : "<<add;
 }
};
void main()
{  clrscr();
 student s1,s2;
 cout<<"\n ******* Enter Student First Details ********";
 s1.getdata();
 s1.display();

 cout<<endl;

 cout<<"\n ******* Enter Student Second Details ********";
 s2.getdata();
 s2.display();
 getch();
}
