#include<iostream>
using namespace std;

class Customer{
    int rollno;
    string name;
public:
    Customer(string name){
        this->name=name;
        cout<<"constructor is being called"<<name<<endl;
    }

    ~Customer(){
        cout<<"Destructor is beign called"<<name<<endl;
    }

};
int main(){
    Customer A1("Abhinav");
    Customer A2("ansh"), A3("hello"), A4("ayush");
}