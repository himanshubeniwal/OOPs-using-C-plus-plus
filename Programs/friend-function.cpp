#include <iostream>
using namespace std;
#include<windows.h>

class Distance {
    private:
        int meter;
    public:
        Distance(): meter(0){ }
        friend int func(Distance); //friend function
};

int func(Distance d){
    //function definition
    d.meter=10; //accessing private data from non-member function
    return d.meter;
}

int main(){ Distance D;
    cout<<"\nProgram by Himanshu beniwal \n";
    cout<<"Distace: "<<func(D)<<endl;
    system("pause");
    return 0;
}
