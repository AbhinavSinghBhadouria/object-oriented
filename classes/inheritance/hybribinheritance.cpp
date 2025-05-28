#include<iostream>
using namespace std;

class student{
    public:
    void print(){
        cout<<"i am a student"<<endl;  // base class
    }
};
class male{
    public:
    void maleprint(){
        cout<<"i am a male"<<endl;
    }
};

class female{
    public:
    void femaleprint(){
        cout<<"i am a female"<<endl;
    }
};

class boy: public student,public male{
    public:
    void print(){
        cout<<"i am a boy"<<endl;
    }
};

class girl: public student, public female{
    public:
    void print(){
        cout<<"i am a girl"<<endl;  // derived class
    }
};


int main(){   
    girl g1;
   // g1.girlprint();
   g1.print();  // here the concept of function overriding will be seen..
   g1.femaleprint();
};
// function overriding is a feature of C++ that allows a derived class to provide a specific implementation of a function that is already defined in its base class.
/* when the derived class(girl) defines a function 
with the same name and signature as a function 
int he base class(student), it overrides the base 
class function*/

// class boy: public student,public male{
//for this class 
/*firstly the 
student constructor is called then after 
that male constructor and then after that 
boy constructor is called...*/