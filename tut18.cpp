<<<<<<< HEAD
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
=======
                   //Recursion and recursive
//defination ->recursion is a programming techinque where a function call itself repeatatively until a base condition is met .it break a big problem into smaller subproblem of the same type 
//why use->complex problem ko small parts mei tod deta hai ,->tree,graph,factorial,fibonacci,searching me use hota hai ,->methamtical prblm easy ho jati hai
//limitation -> stack overflow ka risk ,->slow execution ,->more memory use ,->difficult to debug                   

#include <iostream>
using namespace std;
int factorial (int n){
    if(n<=1)
    return 1;
    return n * factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"the fact of"<< a << "is"<<factorial(a)<<endl;
    return 0;

    
}


              // 1 question febonaci seqence 
>>>>>>> 44df98552524097fdc6f6b485ac37e8c42950827
