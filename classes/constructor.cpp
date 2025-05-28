#include<iostream>
using namespace std;

class Customer{
    public:
    string name;
    int *balance;

    Customer(string name, int bal){
        this->name=name;
        balance=new int;
        *balance= bal;
    }
    ~Customer(){
        cout<<"free the dynamically allocated memory"<<endl;
    }
};
int main(){
    Customer A1("Abhinav" , 48700);
}

