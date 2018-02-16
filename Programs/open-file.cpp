#include <iostream>
#include <fstream>

using namespace std;

int main()
{   cout<<"\nProgram by Himanshu Beniwal \n";
   fstream file; //object of fstream class

   //opening file "sample.txt" in out(write) mode
   file.open("test.txt",ios::out);

   if(!file)
   {
       cout<<"Error in creating file!!!";
       return 0;
   }

   cout<<"File created successfully.";

   //closing the file
   file.close();

   return 0;
}
