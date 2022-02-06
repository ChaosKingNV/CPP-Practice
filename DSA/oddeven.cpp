#include<iostream>

int main()
{
    int a;
    std::cout << "Enter the number: ";
    std::cin >> a;
    if (a%2 == 0)
    {
        std::cout << "Even\n";
        return 0;
    }
    else
    { 
        std::cout << "Odd\n";
        return 0;
    }   
}



