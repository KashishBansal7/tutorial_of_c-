                              //Array --> Collection of similar data types 
                               //in array data is stored in contiguous memory locations
                               //Array index starts from 0 to n-1 where n is size of array
                               //Array can be of any data type int, float, char, double, bool etc.
                               //Array can be 1D, 2D, 3D or multi dimensional
//why use - array is use to for efficient storage,fast access,and orgnized handling of large amount of similar data                               
//limitation - array simple aur fast hai ,lakin fixed size ,same data type only ,insertion and deletion difficulty uski main limitation hai.                              


#include<iostream>
using namespace std;
int main(){
    int marks[5] = {23, 45, 56, 89, 90};// [5] is size of array hum 5 likh bhi skte h or nhi bhi 
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=50; //updating value at index 2
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    for(int i=0; i<5; i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
                         // Array and pointer
                         //pointer airthmetic --> address new=address current + i*sizeof(datatype)
                         // The defination of derefrencing is to access the value at the address stored in the pointer
    
    int*p=marks;//p address store krta h marks array ka first elelment ka
    cout<<"The value of markss[0] is "<<*p<<endl; //dereferencing pointer
    cout<<"The value of markss[1] is "<<*(p+1)<<endl; // dereferencing pointer
    cout<<"The value of markss[2] is "<<*(p+2)<<endl; //dereferencing pointer
    cout<<"The value of markss[3] is "<<*(p+3)<<endl; //dereferencing pointer
    cout<<"The value of markss[4] is "<<*(p+4)<<endl; //dereferencing pointer

    return 0;
}
