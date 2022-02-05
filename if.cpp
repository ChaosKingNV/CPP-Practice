#include <iostream>
#include <string>
int main ()
{
    std::string answer = "Naman";
    std::string guess;
    std::cout << "what is your my name? \n";
    std::cin >> guess;
    if (answer == guess)
    {
        std::cout << "You are right";
    }
    std::cout << "You are worng";
}