#include <iostream>
#include<conio.h>
int a,b,c,d,e;
using namespace std;
class A    {
protected:
public:
void getab()    {
cout<<"\n ENter a and b value:";
cin>>a>>b;        }};

class B:public A    {
protected:
public:
void getc()    {
cout<<"Enter c value:";
cin>>c;    }};

class C    {
protected:
public:
void getd()    {
cout<<"Enter d value:";
cin>>d;    }};

class D:public B,public C    {
protected:
public:
void result()    {
getab();    getc();
getd();    e=a+b+c+d;
cout<<"\n Addition is :"<<e; }};

int main()    {
cout<<"\nProgram by Himanshu Beniwal\n";
D d1;
d1.result();
return 0;        }
