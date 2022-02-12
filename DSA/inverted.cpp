#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n); j++)
        {
            if (j <= (n-i))
            {
                std::cout << "  ";

                continue;
            }
            
            int count = 0;

            while (count < n)
            {
                std::cout << "* ";

                count++;                
            }

            if (count == n)
            {
                break;
            }
            
        }
        std::cout << std::endl;
        
    }
    
}