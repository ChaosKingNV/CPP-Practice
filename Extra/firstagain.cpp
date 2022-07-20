#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
    string first_name;
    string last_name;
    int age;
    int standard;
    
    public:
    
    Student()
    {
    }

    Student(string first_name, string last_name, int age, int standard)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->age = age;
        this->standard = standard;
    }


};

int main() 
{
    Student Naman("Naman", "Vashishta", 20, 12);

    cout << Naman.age;
    
    return 0;
}
