#include <iostream>
using namespace std;

// Abstract class
class Shape
{
    protected:
       float l;
    public:
       void getData()
       {
           cin >> l;
       }

       // virtual Function
       virtual float calculateArea() = 0;
};

class Square : public Shape
{
    public:
       float calculateArea()
       {   return l*l;  }
};

class Circle : public Shape
{
    public:
       float calculateArea()
       { return 3.14*l*l; }
};

int main()
{
    Square s;
    Circle c;
cout<<"\nPRogram by Himanshu Beniwal \n";
    cout << "Enter length to calculate the area of a square: \n";
    s.getData();
    cout<<"Area of square: " << s.calculateArea()<<endl;
    cout<<"\nEnter radius to calculate the area of a circle: \n";
    c.getData();
    cout << "Area of circle: \n" << c.calculateArea()<<endl;

    return 0;
}
