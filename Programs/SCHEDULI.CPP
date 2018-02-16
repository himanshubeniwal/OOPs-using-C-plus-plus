#include <iostream>
#include <conio.h>
void main()
{
  int bt[20], wt[20], awt;
  int i,n;
  clrscr();
  cout<<"\n Enter number of Process : ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
     cout<<"\n Enter Burst time of P ["<<i<<"] : ";
     cin>>bt[i];
  }
  int j;
  wt[0]=0;
  for(i=1;i<=n;i++)
      {
	 for(j=0;j<=i;j++)
	    {
		wt[i]=bt[j]+wt[i-1];

	    }
      }
  awt=wt[i]/n;

  for(i=1;i<=n;i++)
  {
    cout<<"\n Burst time for Entered P["<<i<<"] : "<<bt[i];
  }
  cout<<"\n Average Waiting time is : "<<awt<<" ms";


}
