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
    Human(){
        // it is used to allow object creating without argument...
    };
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

void display(){
    cout<<name<< age<<rollno<< fees<<endl;
}
};

class Teacher: public Human{
    int salary;

    public:
    Teacher(int salary, string name, int age){
        this->salary=salary;
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<name<<" "<<salary<<" "<<age<< endl;
    }
};

int main(){
    Student A1("Abhinav ",26,22,99);
    A1.display();
    A1.work();
    Teacher a2(99, "abhi",23);
    a2.display();

}


// #include<iostream>
// using namespace std;

// // Base class
// class Human {
// protected:
//     string name;
//     int age;
// public:
//     // Constructor to initialize name and age
//     Human(string name, int age) {
//         this->name = name;
//         this->age = age;
//     }

//     void work() {
//         cout << "I am working" << endl;
//     }

//     void display() {
//         cout << name << " " << age << endl;
//     }
// };

// // Derived class Student inheriting from Human
// class Student : public Human {
//     int rollno, fees;
// public:
//     // Constructor uses initializer list to call base class constructor
//     Student(string name, int age, int rollno, int fees) : Human(name, age) {
//         this->rollno = rollno;
//         this->fees = fees;
//     }

//     // Overridden display function
//     void display() {
//         cout << name << " " << age << " " << rollno << " " << fees << endl;
//     }
// };

// // Derived class Teacher inheriting from Human
// class Teacher : public Human {
//     int salary;
// public:
//     // Constructor with initializer list for base class
//     Teacher(int salary, string name, int age) : Human(name, age) {
//         this->salary = salary;
//     }

//     // Overridden display function
//     void display() {
//         cout << name << " " << salary << " " << age << endl;
//     }
// };

// int main() {
//     // Creating a Student object
//     Student A1("Abhinav", 26, 22, 99);
//     A1.display();  // Calls Student's display
//     A1.work();     // Inherited from Human

//     // Creating a Teacher object
//     Teacher A2(50000, "Abhi", 23);
//     A2.display();  // Calls Teacher's display

//     return 0;
// }
