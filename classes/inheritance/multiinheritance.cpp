#include<iostream>
using namespace std;
class person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }

};

class Employee: public person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My monthly salary is"<<salary<<endl;
    }
};

class Manager: public Employee{
    public:
    string department;

    Manager(string name,int salary, string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
};

int main(){
    Manager A1("Rohit", 200 , "Finance");
    A1.introduce();
    //A1.salary();   //inaccessible because salary is protected in Employee class
    A1.monthly_salary(); //accessible because monthly_salary is public in Employee class
   // A1.name(); // inaccessible because name is protected in person class
}
