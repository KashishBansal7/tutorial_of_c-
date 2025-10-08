            // inline function,default argument & constent argument
            
//-->Inline function -> ye 1 esa function hai jiska code function call ki jgha directly compiler insert kar deta hai ,mostly chote fun^ ke liye use hota haia



#include<iostream>
using namespace std ;

// inline int sum(int a ,int b){
//     return a+b;
// }

// int main(){
//     int a,b;
//     cout<<"Enter a and b"<<endl;
//     cin>>a>>b;
//     cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    
// }

               // default 
               //--> default -> ye ek value hoti hai jo function use krta hai agr caller ne value paas nhi ki ho.
           
void greet(string name = " guest"){
    cout<<"hello, "<<name<<endl;
}               
int main(){
    greet("kashish");
    greet();
}
                //constant arguments
                //-->ye argument vo hota hai jo function ke ander change nhi kiya ja skta ,iske liye cinstent use krte hai