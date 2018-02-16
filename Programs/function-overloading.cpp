#include <iostream>
using namespace std;

long add(long, long);
float add(float, float);
int main()
{   cout<<"\nProgram by Himanshu Beniwal \n";
 long a, b, c;
 float e, f, g;
 cout << "Enter two integers\n";
 cin >> a >> b;
 c = add(a, b);
 cout << "Sum of integers: " << c << endl;
 cout << "Enter two floating point numbers\n";
 cin >> e >> f;
 g = add(e, f);
 cout << "Sum of floats: " << g << endl;
}

long add(long c, long g)
{
 long sum;
 sum = c + g;
 return sum;
}

float add(float c, float g)
{
 float sum;
 sum = c + g;
 return sum;
}
