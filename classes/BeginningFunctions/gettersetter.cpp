#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    string address;
    int rollno;
     
    public:
    //setter function
    void setname(string n){
        name=n;
    }

    void setage(int a){
        age=a;
    }
    void setaddress(string ad){
        address=ad;
    }

    void setrollno(int roll){
        rollno=roll;
    }

    //getter functions...
    void getname(){
        cout<<name<<endl;
    }


};
int main(){
    Student s1;
    s1.setname("Abhinav");
    s1.setage(21);
    s1.setaddress("kanpur");
    s1.setrollno(19);
    s1.getname();
    

}