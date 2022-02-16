#include <iostream>

bool prime(int n)
{
    for (int i = 2; i < n ; i++)
    {
        if ((n % i) == 0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            std::cout << i << " ";
        }
        
    }

    return 0;

}