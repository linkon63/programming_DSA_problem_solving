#include <iostream>
using namespace std;
class TestClass
{
public:
    string bName,sName;
    void display(){
    cout<<"Display From TestClass"<<endl;
    }
// protected:
    void Batch()
    {
        cout<<"Batch name:";
        cin>>bName;
        cout<<"Section Name:";
        cin>>sName;
    }
};
class classOne: public virtual TestClass
{
protected:
    void SectionA()
    {
        Batch();
    }
    void SectionAShow()
    {
        cout<<"Batch name:"<<bName<<endl<<"Section Name:"<<sName<<endl;
    }
};
class classTwo: public virtual TestClass
{
protected:
    void SectionB()
    {
        Batch();
    }
    void SectionBShow()
    {
        cout<<"Batch name:"<<bName<<endl<<"Section Name:"<<sName<<endl;
    }
    void SectionC()
    {
        Batch();
    }
    void SectionCShow()
    {

        cout<<"Batch name:"<<bName<<endl<<"Section Name:"<<sName<<endl;
    }
    void SectionD()
    {
        Batch();
    }
    void SectionDShow()
    {
        cout<<"Batch name:"<<bName<<endl<<"Section Name:"<<sName<<endl;
    }
};

class School: public classOne, public classTwo
{
public:
    void secA()
    {
        cout<<"IP Batch:"<<endl;
        SectionA();
        cout<<""<<endl;
        cout<<"OP Batch:"<<endl;
        SectionAShow();
    }
    void secB()
    {
        cout<<"IP Batch:"<<endl;
        SectionB();
        cout<<""<<endl;
        cout<<"OP Batch:"<<endl;
        SectionBShow();
    }
    void secC()
    {
        cout<<"IP Batch:"<<endl;
        SectionC();
        cout<<""<<endl;
        cout<<"OP Batch:"<<endl;
        SectionCShow();
    }
    void secD()
    {a
        cout<<"IP Batch:"<<endl;
        SectionD();
        cout<<""<<endl;
        cout<<"OP Batch:"<<endl;
        SectionDShow();
    }
};
int main()
{
    School sObj;
    sObj.secA();
    cout<<""<<endl;
    sObj.secB();
    cout<<""<<endl;

    sObj.secC();
    cout<<""<<endl;
    sObj.secD();

    sObj.display();
    sObj.Batch();
    return 0;
}

