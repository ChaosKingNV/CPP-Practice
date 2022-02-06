#include<iostream>

class User
{
    public:             //Classes are by default private
    std::string first_name;
    std::string last_name;
    std::string status;
};

int main()
{
    User user1;
    user1.first_name = "Naman";
    user1.last_name = "Vashishta";
    user1.status = "Platinum";

    return 0;
}