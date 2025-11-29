                     //Recursions & recursive funtions 
// A function that calls itself is known as a recursive function.  
// why-solve repetitive or self similar problem easily by braking them into samller parts - making code short,logical,and clean.                  
// problem - mathamatical, factorial ,fibonacci series ,tree traversal ,graph traversal ,hanoi tower etc.
//limitation-iska code short hota hai but memory zyada use krta hai,and debugging complex ho jata hai.

#include<iostream>
using namespace std;
int factorial (int n){
    if(n<=1){
        return 1;
    }
return n*factorial(n-1);
}

int main(){
// factorial of number 
//0! = 1 by definition
//1! = 1 by definition
// n! = n*(n-1)! 
int a;
cout<<"Enter a number to find factorial "<<endl;
cin>>a;
cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
return 0;
}