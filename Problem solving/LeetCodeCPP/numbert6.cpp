#include <iostream>
using namespace std;
class Linkon
{
private:
    int height, age;
public:
    Linkon()
    {
        cout<<"Here your age and height will be shown"<<endl;
    }
    Linkon(int h, int a) //parametrized constructor
    {
        cout<<"Parameterized Constructor"<<endl;
        age = a;
        height = h;
    }
    Linkon(Linkon &obj1) //copy constructor
    {
        cout<<"Copy Constructor"<<endl;
        age= obj1.age;
        height = obj1.height;
    }
    void display()
    {
        cout<<" age is = "<<  age <<endl;
        cout<<" hieght is = "<< height<<endl;
    }
    ~Linkon()
    {
        cout<<"Destructor"<<endl;
    }
};
int main()
{
    Linkon obj0;

    Linkon obj1(5, 10);
    obj1.display();

    Linkon obj2(obj1);
    obj2.display();
    return 0;
}
