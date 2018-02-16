#include <iostream>
#include<conio.h>
#include <string.h>
#include<stdio.h>
using namespace std;

class person    /*Parent class*/
{
  private:
      char fname[100],lname[100],gender[10];
  protected:
      int age;
  public:
      void input_person();
      void display_person();
};

class student: public person    /*Child class*/
{
  private:
      char college_name[100];
      char level[20];
  public:
      void input_student();
      void display_student();
};

void person::input_person()
{
    cout<<"First Name: ";
    cin>>fname;
    cout<<"Last Name: ";
    cin>>lname;
    cout<<"Gender: ";
    cin>>gender;
    cout<<"Age: ";
    cin>>age;
}

void person::display_person()
{
    cout<<"First Name : "<<fname<<endl;
    cout<<"Last Name  : "<<lname<<endl;
    cout<<"Gender     : "<<gender<<endl;
    cout<<"Age        : "<<age<<endl;
}

void student::input_student()
{
    person::input_person();
    cout<<"College: ";
fflush(stdin);
    gets(college_name);
    cout<<"Level: ";
    cin>>level;
}

void student::display_student()
{
    person::display_person();
    cout<<"College    : "<<college_name<<endl;
    cout<<"Level      : "<<level<<endl;
}

int main()
{   cout<<"\nProgram by Himanshu Beniwal.\n";
    student s;
    cout<<"Input data"<<endl;
    s.input_student();
    cout<<endl<<"Display data"<<endl;
    s.display_student();
    getch();
    return 0;
}
