#include<iostream>

int Sum (int a , int b)
{
    return (a+b);
}

int main()
{
    int slices;
    std::cin >> slices;
    int result;
    result = Sum(slices, 2);
    std::cout << result << std::endl;
    return 0;
}