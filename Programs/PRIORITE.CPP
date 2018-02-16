#include<iostream.h>
#include<conio.h>
void main()
{
 int bt[10];
 int pr[10];
 int n,i;
 int avg;
 clrscr();
 cout<<"\n Enter The Number of Processes to be Executed : ";
 cin>>n;

 for(i=0;i<n;i++)
 {
   cout<<"\n Enter the Process [ "<<i<<" ] Burst time :  ";
   cin>>bt[i];
   cout<<"\n Enter priority of process : ";
   cin>>pr[i];
 }
 int temp;

 for(i=0;i<n;i++)
 {
  for(int j=0;i<i;j++)
  {
  if(pr[i]>pr[i+1])
   {
   temp=pr[i];
   pr[i]=pr[i+1];
   pr[i+1]=temp;
   }
  }
 }
 for(i=0;i<n;i++)
 {
   cout<<"\n Process time : "<<pr[i];
   cout<<"\n Burst time : "<<bt[i];
 }

getch();
}