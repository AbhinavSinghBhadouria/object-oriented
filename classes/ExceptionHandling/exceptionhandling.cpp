#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance;
    int account_number;

        public:
    Customer(string name, int balance, int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }
    
    //deposit
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"is credited successfully"<<endl;
        }
        else{
            throw"Amount should be greater than zero";
        }
    }

    //withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"is debited successfully"<<endl;
        } else if(amount<0) {
            throw"Insufficient balance";
        } else {
            throw"Invalid amount";
        }
    }
};

int main(){
    Customer C1("Abhinav", 5000, 10);
    try{
    C1.deposit(100);
    C1.withdraw(6000);
    }
    catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;
    }
};