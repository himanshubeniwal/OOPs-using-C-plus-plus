#include<iostream.h>
#include<conio.h>
void main()
{
 float bt[10],wt[10];
 float avg=0;
 float avgwt;
 int i,j,n;
 int temp;
 clrscr();
 cout<<"\n Enter Number of Processes to be executed : ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<" \n Enter the Burst time of Process [ "<<(i+1)<<" ] :  ";
  cin>>bt[i];
 }
 clrscr();
for(i=0;i<n-1;i++)
 {
     for(j=0;j<n-i-1;j++)
      {
       if(bt[j]>bt[j+1])
	{
	 temp=bt[j];
	 bt[j]=bt[j+1];
	 bt[j+1]=temp;
	}
       }
 }
 cout<<"\n Sorted list of Waiting time ***** ";
 for(i=0;i<n;i++)
 {
  cout<<"\n Burst time of Process : "<<bt[i];
 }                  /*
 for(i=0;i<n;i++)
 {
    avg=avg+wt[i];
 }
  avgwt=avg/n;
  cout<<"\n Average waiting time of [ "<<n<<" ] Processes "<<avgwt<<"  ms.";
		     */
 getch();
}