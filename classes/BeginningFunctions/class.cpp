#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string address;
    int rollno;
};

int main(){
    Student s1;
    s1.name="Abhinav ";
    s1.age=20;
    s1.address="kanpur";
    s1.rollno=19;
    cout<< "Name:"<<s1.name<<endl;
    cout<< "Age:"<<s1.age<<endl;
    cout<< "Address:"<<s1.address<<endl;
    cout<< "Roll No:"<<s1.rollno<<endl;

}
