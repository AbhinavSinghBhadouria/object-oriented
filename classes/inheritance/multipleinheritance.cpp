#include<iostream>
using namespace std;
 class Engineer{
    public:
    string specialization;

    Engineer(){
        cout<<"Hello Engineer"<<endl;
    }

    void work(){
        cout<<"i have specialization in"<< specialization<<endl;
    }


 };

 class youtuber{
    public:
    int subscriber;

    youtuber(){
        cout<<"Hello Youtuber"<<endl;
    }
     
    void contentcreater(){
        cout<<"I have a subs class of"<< subscriber<< endl;
    }
 };

 class CodeTeacher : public Engineer, public youtuber{
    public:
    string name;

    CodeTeacher(){
        cout<<"hello coder"<<endl;
    }
     
   CodeTeacher(string name, string specialization,int subscriber){
        this->name=name;
        this->specialization=specialization;
        this->subscriber=subscriber;
    }
    void display(){
        cout<<"My name is"<<name<<endl;
        cout<<"I am an engineer with specialization in "<<specialization<<endl;
        cout<< "I am also a youtuber with "<<subscriber<<" subscribers."<<endl;
    }
 };

 int main(){
    CodeTeacher A1;//("Abhinav", "CSE",100);
    // A1.display();
    // A1.work();
    // A1.contentcreater();
    //work();
   // contentcreater();
 }

 // y jo main m comment out kiya h vo isliye  taki check krr ske phele kya execute hua h....