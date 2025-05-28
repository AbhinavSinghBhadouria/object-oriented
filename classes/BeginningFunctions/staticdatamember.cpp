#include<iostream>
using namespace std;
 class Customer{
    string name;
    int rollno;
    int age;
    static int count;
    public:

    Customer(string name, int rollno, int age){
        this->name=name;
        this->rollno=rollno;
        this->age=age;
        count++; // it is counting the number of object is the program;
    }

    void display(){
        cout<<count<<endl;
    }
 };

 int Customer:: count=0;
 int main(){
    Customer A1("Abhinav", 1, 20);
    Customer A2("Atul" , 2 , 21);
    A1.display();
    A2.display();
 }