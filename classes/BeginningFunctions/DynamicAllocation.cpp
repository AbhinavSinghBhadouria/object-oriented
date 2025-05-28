#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    string address;
    int age;
};
int main(){
    Student *s1=new Student();
    (*s1).name="Abhinav";
    (*s1).address="kanpur";
    (*s1).age=21;

    cout<< "Name:" <<s1->name  <<endl;
    cout<<"Address:" <<s1->address <<endl;
    cout<<"Age:" <<s1->age <<endl;
    return 0;
}