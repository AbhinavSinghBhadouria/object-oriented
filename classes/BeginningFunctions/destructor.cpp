#include<iostream>
using namespace std;

class Customer{
    string name;
    int *balance;

    public:
    Customer(){
        name="Rohit";
        balance= new int;
        *balance=10;
        cout<<"function is being called"<<endl;
    }

    ~Customer(){
       delete balance; //same work
        cout<<"memory has been freed"<<endl;
    }
};
int main(){
    Customer A1;
}