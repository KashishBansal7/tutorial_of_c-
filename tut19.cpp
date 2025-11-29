                            // Function Overloading
    // When multiple functions have the same name but different parameters (different type or number of parameters)
    // The correct function is chosen based on the arguments passed during the function call
    // This allows for code readability and reusability




#include <iostream>
using namespace std;
// Example of function overloading
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
int main(){
    cout << "Sum of integers: " << add(5, 10) << endl;          // Calls int version
    cout << "Sum of doubles: " << add(5.5, 10.2) << endl;     // Calls double version

    return 0;
}