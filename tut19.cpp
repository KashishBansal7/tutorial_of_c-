// function overloading
// defination -> "funtion overloading"is a feature that allow multiple funtion with same name but diffrent perameter ,so that compiler can choose the correct fun^ to execute based on the number or type of argument
// why,use->1. Code ko readable aur clean banane ke liye Ek hi kaam ke liye alag-alag naam ke function banane ki need nahi padti.
// Code reusability->Bar-bar different naam ka similar function likhne ki zarurat nahi hoti।
// limitation->3. Too many overloads = Bahut saare overloaded functions hone par code manage karna difficult ho jata hai।
// 1. Return type se overload nahi kar sakte Ye error hoga:

// int test();
// float test();  // ERROR

// 2. Ambiguity (compiler confuse ho jata hai)
// Agar parameter conversions possible ho:

// void fun(int);
// void fun(double);
// fun(5.5f); // int bhi ban sakta hai, double bhi → confusion

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << "using function with 2 argument" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "using function with 3 argument" << endl;
    return a + b + c;
}

// calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}

// Ractangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The sum of 3 and 5 argument = " << sum(3, 5) << endl;
    cout << "The sum of 9 and 8 and 2 argument = " << sum(9, 8, 2) << endl;
    cout<<"the volume of cubeoid of 3,7 and 6 is = "<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder of 3 and 6 is = "<<volume(3,6)<<endl;
    cout<<"the volume of cube of side  3 = "<<volume(3)<<endl;
    return 0;
}