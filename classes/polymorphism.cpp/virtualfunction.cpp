// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"hu hu"<<endl;
//     }
// };

// class Dog: public Animal{
//     public:
//     void speak(){
//         cout<<"bark sound like atu"<<endl;
//     }
// };

// int main(){
//     Animal *p;
//     p= new Dog();
//     p->speak(); // This will call the speak method of Dog class due to polymorphism
// };
// from the above code the output will be hu hu

#include<iostream>
using namespace std;
class Animal{
    public:
    // virtual keyword command to the progrma to decide the speak function in run time 
    //rather than in compile time...
    virtual void speak(){
        cout<<"hu hu"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"bark sound like atu"<<endl;
    }
};

int main(){
    Animal *p;
    p= new Dog();
    p->speak(); // This will call the speak method of Dog class due to polymorphism
    Dog D1;
    D1.speak(); // This will call the speak method of Dog class
};

// now the above code will give the output as bark sound like atu
// because we have used virtual keyword in the base class function speak