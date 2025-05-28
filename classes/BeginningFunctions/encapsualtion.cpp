//wrapping up of data and information in a single unit. while controlling access to them
#include<iostream>
using namespace std;
 class Customer{
     string name;
     int balance;
     int account_no;
     int age;

    public:
      Customer(string name, int balance, int account_no, int age){
        this->name= name;
        this->balance=balance;
        this->account_no=account_no;
      }
      void update_age(int age){
        if(age<0){
            cout<<"invalid age"<<endl;
        }
        else{
         this->age=age;
        }
      }

      void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<< "invalid amount"<< endl;
        }
      }

      void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
        }
      }
      void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<" "<<age<<endl;
      }
 };

 int main(){
    Customer A1("Abhinav", 1000, 1,3);
    Customer A2("Atul", 2000, 2,10);
    Customer A3("Amit", 3000, 3,20);
    A1.deposit(-10);
    A1.update_age(10);
    A1.display();


 }