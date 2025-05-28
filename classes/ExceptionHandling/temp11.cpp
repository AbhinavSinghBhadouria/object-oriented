// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cin >> a >> b;
//     try {
//         if (b == 0)
//             throw "Division by zero error";
//         int c = a / b;
//         cout << c << endl;
//     }
//     catch (const char *e) {
//         cout << "Exception occurred: " << e << endl;
//     }

//     return 0;
// }

// then below code will return error automatically
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr=new int[100000000000000000]; // Attempting to allocate a huge amount of memory
//     cout<<"Memory is allocated successfully"<<endl;
//     delete []ptr; // This line will not be reached if allocation fails
//     return 0;
//     //we know that the memory dynamically is allocated in heap and in heap memory the sapce is more than the stack but not that much to allcoate for this..
// }
