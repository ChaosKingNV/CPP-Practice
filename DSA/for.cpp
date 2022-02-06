#include<iostream>

int main()
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int array [n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter " << i << " element:";
        std::cin >> array[i];
    
    }

        for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    
    }

    std::cout<< std::endl;

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;

        for (int j = i; j < n; j++)
        {
            curr += array[j];
            std::cout << curr << std::endl;
        }
        
    }
    
}