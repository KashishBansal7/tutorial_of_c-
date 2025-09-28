                        // ---> pointers
                        //pointer is a data type/variable which stores the address of another variable

#include<iostream>
using namespace std;
int main (){
    int a=3;
    int* b = &a; // & ---> address of operator and -> * is derefersence operator
    //or
    // int* b;
    //b = &a; 
    cout<<a<<endl; // prints value of a        o/p: 3
    cout<<*b<<endl; // prints value of a       o/p: 3
    cout<<b<<endl; // prints address of a      o/p: 0x61ff08 
    cout<<&a<<endl; // prints address of a     o/p: 0x61ff08  
    cout<<&b<<endl; // prints address of b     o/p: 0x61ff00

                   //pointer to pointer 

    int** c = &b; // **c this is pointer to pointer and &b is address of pointer b 
    cout<<c<<endl; // prints address of b      o/p: 0x61ff00 
    cout<<*c<<endl; // prints address of a     o/p: 0x61ff08
    cout<<**c<<endl; // prints value of a      o/p: 3
    cout<<&b<<endl; // prints address of b     o/p: 0x61ff00             

}
