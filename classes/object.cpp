#include<iostream>
using namespace std;

class Student{
    public:
    char name;
    int age;
    char address;
};

int main(){
    Student s1;
    cout<< sizeof(s1)<<endl;
}
