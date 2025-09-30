                               // Topic--> Structure, Union and Enum in C++
// 1--> structure --> thi user define data type , and collection of different data types 
//or iske ander hum diffrent type ke variable ko ek group me store kr skte hai mtlv ek hi naam ke ander multiple related data 

#include <iostream>
using namespace std;

// struct student
// {
//     int id;
//     char favchar;
//     float fee;
// }st;
// int main(){
//     struct student kashish; // object of structure 
//     struct student Mahi;
//     struct student golu;
//     kashish.id = 95;
//     Mahi.id = 96; // isko bhi hum cout kra skte h
//     golu.id = 97; // isko bhi hum cout kra skte h
//     kashish.favchar = 's';
//     kashish.fee = 5000.50;
//     cout<<kashish.fee<<endl;
//     cout<<kashish.favchar<<endl;
//     cout<<kashish.id<<endl;
//     cout<<Mahi.id<<endl;

//}   
                     // 2--> Union 
// union bhi structure ki tarah hi hota hai but isme hum ek time pe ek hi member ko use kr skte hai                     

// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };
// int main()
// {
//     union money m1;
//     m1.rice = 34;
//     m1.car = 'c'; // isme humne car ko assign kra to rice ka value overwrite ho gya
//     m1.pounds = 45.5; // isme humne pounds ko assign kra to car ka value overwrite ho gya
//     cout << m1.car << endl;
   
   
// }
                              
                        // 3--> Enum 
                        // enum me hum apne variable ko integer value de skte hai

int main()
{
    enum Meal        //meal yaha pe ek data type ban chuka hai or isko hum apne variable ke liye use kr skte hai
    {
        breakfast,
        lunch,
        dinner
    };
    // Meal m1 = lunch;            // yaha pe humne khud hi variable ko integer value di hai
    // cout << m1; // output--> 1
    cout<<dinner<<endl; // output--> 2
    cout<<breakfast<<endl; // output--> 0
    cout<<lunch<<endl; // output--> 1
}