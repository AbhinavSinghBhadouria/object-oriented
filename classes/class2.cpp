#include<iostream>
using namespace std;

class Customer{
    public:
    string name;
    int balance;
    int account_number;

    public:
    Customer(){
        cout<<"Default constructor called"<<endl;
    }

    // Customer(string a, int b ,int c){
    //     name=a;                        // if this constructor is called and the variable name(name, balance, account_number) is same the name
    //     // of the arguments that you had received then we have to use "this keyword" to differentiate between the two
    //     // this->name=a;                // this->name is the class variable and a is the argument variable..
    //     balance=b;
    //     account_number=c;
    // }

    // Customer(string name , int balance , int account_number){
    //     this->name=name;
    //     this->balance=balance;
    //     this->account_number=account_number;
    // }
// inline constructor
    inline Customer(string a,int b, int c): name(a),balance(b), account_number(c){

    }
//constructor overloading
    Customer(string a, int b){
        name=a;
        balance=b;
    }

    void display(){
        cout<<name <<endl<< balance <<endl;
    }

    //copy constructor
    Customer(const Customer &A){
        name=A.name;
        balance=A.balance;
        account_number=A.account_number;
    }
};

    int main(){
        Customer c1("Abhi", 1000, 12345);
        Customer A1,A2,A3;
        A1.name="Amity Unviersity";
        A1.balance=2000;
        A1.account_number=22222;
        A1.display();
        A2.name="Anshika";
        A2.balance=0000;
        A2.account_number=33333;
        A2.display();
        A3.display();
        c1.display();
        Customer c3(c1);
    }