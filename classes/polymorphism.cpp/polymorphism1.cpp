#include<iostream>
using namespace std;
class Area{
    public:
    int calculate(int length, int breadth){
        return length* breadth;
    }

    int calculate(int radius){
        return 3.14* radius *radius;
    }
    void display(int soln){
        cout<<"The area is:"<<soln<<endl;
    }
};
int main(){
    Area A1;
    int soln=A1.calculate(5,10);
    A1.display(soln);
    Area A2;
    cout<<A2.calculate(7)<<endl;
    Area A3;
   // cout<<A2.calculate("Rohan")<<endl; // This line will cause a compilation error because the method expects an int, not a string.
return 0;
    
};