// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int rollno;
//    int std_id;
// };
// class school: public student{
//     int school_id;
//     string school_name;
// };
// int main(){
//     student s1;
//     school s2;
//    // s1.name="Abhinav";  // it is inaccessable
//    s2.school_id=1; 
// }

#include<iostream>
using namespace std;
class Human{
    public:
    string name;
    int age,weight;
};
class student : protected Human{
    private:
    int rollno, fees;

    public:
    void fun(string n, int a,int w){
        name=n;// because we can access any type of data form any type of access modifier so 
        age=a; // we can access data of any type of access modifier inside the class either it is private , protected or public...
        weight=w;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};

int main(){
    student A1;
    A1.fun("Abhinav ",10,50);
    A1.display();
}