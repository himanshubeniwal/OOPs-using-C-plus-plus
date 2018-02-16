#include <iostream>
#include <fstream>
using namespace std;
class student
{    protected:
		int rno;
		char fname[10],lname[10],cource[20];
		char dob[15],mo[15],addr[20],city[10],email[30];
		int sub1;
		int sub2;
		int sub3;
		int sub4;
		int total;
		float per;
		public:
			void input_details()
			{
				cout<<"\n\n Enter Roll No ===>";
				cin>>rno;
				cout<<"\n";
				cout<<"\n\n Enter First Name ===>";
				cin>>fname;
				cout<<"\n";
				cout<<"\n\n Enter Last Name ===>";
				cin>>lname;
				cout<<"\n";
				cout<<"\n\n Enter Cource ===>";
				cin>>cource;
				cout<<"\n";
				cout<<"\n\n Enter Date Of Birth ===>";
				cin>>dob;
				cout<<"\n";
				cout<<"\n\n Enter Mobile No ===>";
				cin>>mo;
				cout<<"\n";
				cout<<"\n\n Enter Address ===>";
				cin>>addr;
				cout<<"\n";
				cout<<"\n\n Enter City ===>";
				cin>>city;
				cout<<"\n";
				cout<<"\n\n Enter Email ===>";
				cin>>email;
				cout<<"\n";
				cout<<"\n\n Enter Mark Of DS ===>";
				cin>>sub1;
				cout<<"\n";
				cout<<"\n\n Enter Mark Of VB ===>";
				cin>>sub2;
				cout<<"\n";
				cout<<"\n\n Enter Mark Of OS ===>";
				cin>>sub3;
				cout<<"\n";
				cout<<"\n\n Enter Mark Of SAD ===>";
				cin>>sub4;
				cout<<"\n";
				total = sub1+sub2+sub3+sub4;
				per=total/4;

			}
			void output_details()
			{
				cout<<"\n\t\t Roll No       :---> "<<rno;
				cout<<"\n\t\t First Name    :---> "<<fname;
				cout<<"\n\t\t Last Name     :---> "<<lname;
				cout<<"\n\t\t cource        :---> "<<cource;
				cout<<"\n\t\t Date Of Birth :---> "<<dob;
				cout<<"\n\t\t Mobile No     :---> "<<mo;
				cout<<"\n\t\t Address       :---> "<<addr;
				cout<<"\n\t\t City          :---> "<<city;
				cout<<"\n\t\t Email         :---> "<<email;
			}
			void output_marksheet()
			{
				cout<<"\n\t\t Marks OF DS   :---> "<<sub1;
				cout<<"\n\t\t Marks OF VB   :---> "<<sub2;
				cout<<"\n\t\t Marks OF OS   :---> "<<sub3;
				cout<<"\n\t\t Marks OF SAD  :---> "<<sub4;
				cout<<"\n\t\t Total Marks   :---> "<<total;
				cout<<"\n\t\t Percentage    :---> "<<per;
				if(per>=90 && per<=100)
				{
					cout<<"\n\n\t\t Your Grade is :----> A+";
					cout<<"\n";
				}
				else if(per>=80 && per<=90)
				{
					cout<<"\n\n\t\t Your Grade is :----> A";
					cout<<"\n";
				}
				else if(per>=70 && per<=80)
				{
					cout<<"\n\t\t Your Grade is :----> B+";

				}
				else if(per>=60 && per<=70)
				{
					cout<<"\n\t\t Your Grade is :----> B";

				}
				else if(per>=50 && per<=60)
				{
					cout<<"\n\t\t Your Grad is :----> C";

				}
				else if(per>=40 && per<=50)
				{
					cout<<"\n\t\t Your Grad is :---->D";

				}
				else
				{
					cout<<"\n\t\t You Are Fail......";

				}

			}
};
class master : virtual public student
{
	public:
		void create()
		{
			cout<<"\n\n\t=========================> Insert Information <========================\n\n";
			input_details();
		}
		void display()
		{
			cout<<"\n\n\t=========================> Summary Report <============================\n\n";
			output_details();
			cout<<"\n\n\t=========================> Marksheet Report <==========================\n\n";
			output_marksheet();
			cout<<"\n\n\t=========================> End Of Marksheet <==========================\n\n";
			cout<<"\n\n\t=========================> End of Report <=============================\n\n";

		}
		void update()
		{
			int choice;
			cout<<"\n\n\t=========================> Update Information <=========================\n\n";
			cout<<"\n\n\t ---------------> choose Details You Want to Perform <--------------\n\n";
			cout<<"\n\n Roll No ===>"<<rno<<"\n";
			cout<<"\n\n First Name ===>"<<fname<<"\n";
			cout<<"\n\n Last Name ====>"<<lname<<"\n";
			cout<<"\n\n Cource ===>"<<cource<<"\n";
			cout<<"\n\n Date Of Birth ===>"<<dob<<"\n";
			cout<<"\n\n Mobile No ===>"<<mo<<"\n";
			cout<<"\n\n Address ===>"<<addr<<"\n";
			cout<<"\n\n City ===>"<<city<<"\n";
			cout<<"\n\n Email ===>"<<email<<"\n";
			cout<<"\n\n DS Marks ===>"<<sub1<<"\n";
			cout<<"\n\n VB Marks ===>"<<sub2<<"\n";
			cout<<"\n\n OS Marks ===>"<<sub3<<"\n";
			cout<<"\n\n SAD Marks ===>"<<sub4<<"\n";
			cout<<"\n\n Enter Your Choice ====>";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"\n\n Enter Roll No :--->";
					cin>>rno;
					cout<<"\n";
					break;
				case 2:
					cout<<"\n\n Enter First Name :--->";
					cin>>fname;
					cout<<"\n";
					break;
				case 3:
					cout<<"\n\n Enter Last Name :--->";
					cin>>lname;
					cout<<"\n";
					break;
				case 4:
					cout<<"\n\n Enter Cource :--->";
					cin>>cource;
					cout<<"\n";
					break;
				case 5:
					cout<<"\n\n Enter Date Of Birth :--->";
					cin>>dob;
					cout<<"\n";
					break;
				case 6:
					cout<<"\n\n Enter Mobile No :--->";
					cin>>mo;
					cout<<"\n";
					break;
				case 7:
					cout<<"\n\n Enter Address :--->";
					cin>>addr;
					cout<<"\n";
					break;
				case 8:
					cout<<"\n\n Enter city :--->";
					cin>>city;
					cout<<"\n";
					break;
				case 9:
					cout<<"\n\n Enter Email :--->";
					cin>>email;
					break;
				case 10:
					cout<<"\n\n Enter Marks Of DS :--->";
					cin>>sub1;
					break;
				case 11:
					cout<<"\n\n Enter Marks of VB :--->";
					cin>>sub2;
					cout<<"\n";
					break;
				case 12:
					cout<<"\n\n Enter Marks of OS :--->";
					cin>>sub3;
					cout<<"\n";
					break;
				case 13:
					cout<<"\n\n Enter Marks of SAD :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				default:
					cout<<"\n\n=======> Invalid Choice <=========\n ******** Try again ********\n\n";
					break;
			}
		}
};
using namespace std;
void main()
{   master ms;
	while(1)
	{
		cout<<"\n\t==============> Developed By : Ajay Kathait <=================\n";
		cout<<"\n\t==============> Master Database <================\n";
		cout<<"\n\n\t ********** Choose Operation You Want To Perform **********\n\n";
		cout<<"\n\n\t 1) Create Record";
		cout<<"\n\n\t 2) Display Record";
		cout<<"\n\n\t 3) Update Record";
		cout<<"\n\n\t 4) Exit Program";
		cout<<"\n\n Enter your choice====>";
int ch;
cin>>ch;
		switch(ch)
		{
			case 1:
				ms.create();
				break;
			case 2:
				ms.display();
				break;
			case 3:
				ms.update();
				break;
			case 4:

				goto out;
			default:
				cout<<"\n\n\t========> Invalid choice <========";
				break;
		}
	}
	out:

}
