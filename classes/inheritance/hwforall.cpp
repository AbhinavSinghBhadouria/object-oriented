#include<iostream>
using namespace std;

class father{
    public:
    string surname;
    string address;
    father(string surname, string address){
        this->surname=surname;
        this->address=address;
    }
    void print(){
        cout<<"I am a father"<<endl;
    }
};

class child:public father{
    public:
    string name;
    int age;
    // child(){

    // }
    child(string name, int age,string surname,string address):father(surname,address){
        
        this->name=name;
        this->age=age;
    }
    void print(){
        cout<<"I am a child"<< endl;
        cout<<"My name is:"<<name <<" "<< surname<<endl;
    }
};
int main(){
    child c1("Abhinav", 26,"Singh", "Delhi");
    c1.print();
    return 0;
};