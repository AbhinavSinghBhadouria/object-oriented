#include<iostream>
using namespace std;
class Human{
    protected:  // agr yha protected ki place pr private hota to y access nhi hota
    string name;
    int age;
    public:
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }
    void work(){
        cout<<"I an working"<<endl;
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }


};

class Student: public Human{ // this line is used to create derived class
    // with the help of derived class you can accesss both public an dprotected class ....
    int rollno, fees;
    public:
    Student(string name,int age,int rollno, int fees):Human(name,age){
        // this->name=name;
        // this->rollno=rollno;
        this->age=age;
        this->fees=fees;

    }
//y jo display function h hai vo child class m 
//mann lo ki apne program do display function ho same name s
//ek child class m or dusra parent class m 
// to phele jo display hoga vo child vala hoga phir parent vala 
void display(){
    cout<<name<< age<<rollno<< fees<<endl;
}
};

int main(){
    Student A1("Abhinav ",26,22,99);
    A1.display();
    A1.work();
}