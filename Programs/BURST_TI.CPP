#include<iostream.h>
#include<conio.h>
void main()
{
 int bt[10],wt[10];
 int n,avg=0,avgwt;
 int i,j;
 clrscr();
 cout<<"\n Enter Number of Processes to be executed : ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<" \n Enter the Process [ "<<i<<" ] burst time : ";
  cin>>bt[i];
  cout<<"\n Enter the Waiting time of process [ "<<i<<" ] : ";
  cin>>wt[i];
 }
 for(i=0;i<n;i++)
 {
    avg=avg+wt[i];
 }
  avgwt=avg/n;
  cout<<"\n Average waiting time of Process "<<avgwt;
 getch();
}