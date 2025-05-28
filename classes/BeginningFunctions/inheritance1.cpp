#include<iostream>
using namespace std;
class Human{
    private:
    int age;
    protected:
    int b;
    void fun(){
        age=10;
        b=20;
        c=30;
    }
    public:
    int c;

    void setage(int age){
        this->age=age;
    }
    void display(){
        cout<<age<<endl;
    }
};
int main(){
    Human A;
    //A.setage(10);
    A.display();
}