#include<iostream>
using namespace std;

class Human{
    public:
    string name;

    void display(){
        cout<<" My name is: "<<name<<endl;
    }

};
 class Engineer: public virtual Human{
    public:
    string specialization;

    // Engineer(){
    //     cout<<"Hello Engineer"<<endl;
    // }

    void work(){
        cout<<"i have specialization in"<< specialization<<endl;
    }


 };
//iss line k badd vali line m virtual hta k dekho error aayega 
//kyu ki ambiguity present h next line m name or display ko lkr
 class youtuber:public virtual Human{
    public:
    int subscriber;

    // youtuber(){
    //     cout<<"Hello Youtuber"<<endl;
    // }
     
    void contentcreater(){
        cout<<"I have a subs class of"<< subscriber<< endl;
    }
 };

 class CodeTeacher : public Engineer, public youtuber{
    public:
    //string name;
    int salary;

    // CodeTeacher(){
    //     cout<<"hello coder"<<endl;
    // }
     
   CodeTeacher(string name, string specialization,int subscriber, int salary){
        this->name=name;
        this->specialization=specialization;
        this->subscriber=subscriber;
        this->salary=salary;
    }
    void display(){
        cout<<"My name is"<<name<<endl;
        cout<<"I am an engineer with specialization in "<<specialization<<endl;
        cout<< "I am also a youtuber with "<<subscriber<<" subscribers."<<endl;
    }
 };

 int main(){
    CodeTeacher A1("Abhinav", "CSE",100,99);
    A1.display();
    // A1.work();
    // A1.contentcreater();
    //work();
   // contentcreater();
 }

 // y jo main m comment out kiya h vo isliye  taki check krr ske phele kya execute hua h....