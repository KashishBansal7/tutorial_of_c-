// classes
// classes is a user-defined data type that serves as a blueprint for creating objects.
// why use-> to bundle data and functions that operate on that data into a single unit.
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string department;
    string subject;

    // void changeDept(string newDept) {
    //     dept = newDept;                                  // // member function to change department
    // }
    void setSalary(double s)
    { // setter
        salary = s;
    }
    double getSalary()
    { // getter
        return salary;
    }
};
int main()
{
    Teacher t1;
    t1.name = "kashmita";
    t1.department = "CSE";
    t1.subject = "OOP";
    t1.setSalary(50000);
    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.department << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}