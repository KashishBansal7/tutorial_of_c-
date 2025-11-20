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