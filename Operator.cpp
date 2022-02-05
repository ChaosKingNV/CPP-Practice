#include<iostream>

class User
{
    public:             
    std::string first_name;
    std::string last_name;
    std::string status;
};

std::ostream& operator << (std::ostream& output, User user)
{
    output << "First Name: " << user.first_name << "\nLast Name: "<< user.last_name;
    return output;
}

int main()
{
    User user1; 
    user1.first_name = "Naman";
    user1.last_name = "Vashishta";
    user1.status = "Platinum";

    std::cout << user1 << std::endl;

    return 0;
}
