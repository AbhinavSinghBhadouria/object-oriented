#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;

    public:
    Complex(int real, int imag){
        this->real=real;
        this->imag=imag;
    }
//     omplexnumber.cpp:17:17: error: no matching constructor for initialization of 'Complex'
//    17 |         Complex temp;
//       |                 ^
    Complex(){

     };
    void display(){
        cout<<"complexno:"<< real<<"+i"<<imag<<endl;
    }
    Complex operator *(Complex &C){
        // creating temporary object to hold the result 
        Complex temp;
        temp.real= real*C.real;
        temp.imag=imag*C.imag;
        return temp;
    }

    // there may be a question that how you get the access to the private members of the class
    // RULE:
    // you can access the private member of the class if the function is a member of the class
    // within the class ,same type of object will have access to the private members of the class.....
    // that is how we are able to access the private members of the class Complex
};
int main(){
    Complex C1(5,10);
    Complex C2(7,3);

    Complex C3=C1*C2; // This line will cause a compilation error because the '+' operator is not defined for Complex objects.
    C3.display();
}