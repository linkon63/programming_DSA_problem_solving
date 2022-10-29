#include <iostream>
using namespace std;

class A
{
public:
    int a = 10,b = 20;
    void printA()
    {
        cout<<"A + B = "<< a+b<<endl;
    }
};

class B:public A
{
public:
    int c = 30;
    void printB()
    {
        cout<<"A + B = "<< a+b<<endl;
    }
};

int main()
{
    A aObj;
    B bObj;
    cout<<"A Class Proparties : "<<endl;
    cout<<"A:"<<aObj.a<<endl;
    cout<<"B:"<<aObj.b<<endl;
    aObj.printA();

    cout<<"\n\nAfter Change the Value of A"<<endl;
    cout<<"Value of A:";
    cin>>aObj.a;
    cout<<"Value of B:";
    cin>>aObj.b;
    cout<<"\nAfter Change the Value of A and B"<<aObj.a<<" : "<<aObj.b<<endl;
    aObj.printA();

    cout<<"Inheritance Class Proparties : "<<endl;
    cout<<"A:"<<bObj.a<<endl;
    cout<<"B:"<<bObj.b<<endl;
    bObj.printB();
    bObj.printA();

    return 0;
}
