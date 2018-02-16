#include<iostream>
#include<fstream>
using namespace std;

int main()
{   cout<<"\nProgram by himanshu beniwal \n";
	char ch;
	const char *fileName="sample.txt";

	//declare object
	ifstream file;

	//open file
	file.open(fileName,ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
		return -1; //return from main
	}

	//read and print file content
	while (!file.eof())
	{
		file >> noskipws >> ch;	//reading from file
		cout << ch;	//printing
	}
	//close the file
	file.close();

	return 0;
}
