#include <iostream>
#include <string>
using namespace std;


class Student {
public: 
    int roll; 
    string Name; 
    float percent; 
};

int main()
{
    
    Student std;

    
    std.roll = 101;
    std.Name = "Naman Vashishta";
    std.percent = 94.32f;

    
    cout << "Student's Roll No.: " << std.roll << "\n";
    cout << "Student's Name: " << std.Name << "\n";
    cout << "Student's Percentage: " << std.percent << "\n";

    return 0;
}