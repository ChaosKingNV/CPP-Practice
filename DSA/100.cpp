#include<iostream>
#include<string>

class User
{
    public:
        std::string name;
        int age;

    User(std::string n, int a)
    {
        this->name = n;
        this->age = a;
    }
    User()
    {

    }
};

int main()
{
    User me;
    User you("Anshita", 20);

    std::cout << you.name;
}