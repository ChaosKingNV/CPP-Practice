#include<iostream>
int main()
{
    int n;
    std::cout << "Enter size of array:";
    std::cin >> n;

    char array[n+1];

    std::cin >> array;
    std::cout << array << std::endl;

    char check[n+1];

    int j = 0;
    for (int i = n-1; i >=0 ; i--)
    {
        check[j] = array[i];
        j++;
    }

    std::cout << check << std::endl;

    if (array == check)
    {
        std::cout << "Palindrome \n";
    }
    else
    {
        std::cout << "Not a Palindrome \n";
    }

    return 0;
}