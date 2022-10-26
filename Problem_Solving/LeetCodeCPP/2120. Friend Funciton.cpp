#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    int age;
    friend void showFriend(string name, int age);
    friend void showArr(Employee emObj[2], int n);
    Employee(){
        cout<<"Name:";
        cin>>name;
        cout<<"Age:";
        cin>>age;
    }
};

void showFriend(string name, int age){
    cout<<"Showing your Friend"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
};
void showArr(Employee emObj[2], int n){
    for(int i=0; i<n; i++){
    cout<<"Showing Friend : "<< i <<endl;
    cout<<emObj[i].name<<endl;
    }
};
int main(){
    Employee emObj[2];
    for(int i=0; i<2; i++){
        showFriend(emObj[i].name, emObj[i].age);
    }
    showArr(emObj,2);
return 0;
}
