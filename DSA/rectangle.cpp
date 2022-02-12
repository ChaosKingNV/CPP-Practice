#include <iostream>

int main()
{
    int r;
    std::cin >> r;


    for (int i = 1; i <= (2*r); i++)
    {
        if (i <= r )
        {
            for (int j = 1; j <= r; j++)
            {
                
                if (j <= (i-1))
                {
                    std::cout << "  ";
                }
                else
                {
                    std::cout << "* ";
                }
                
                
            }
            for (int j = (r+1); j <= (2*r); j++)
            {
                if (j<=(((2*r)-i)+1))
                {
                    std::cout << "* ";
                }
                else
                {
                    std::cout << "  ";
                }
                
                
                
            }
            
        }
        else if (i > r )
        {
            for (int j = 1; j <= r; j++)
            {
                if (j <= (r-(i-r)))
                {
                    std::cout << "  ";
                }
                else
                {
                    std::cout << "* ";
                }
                    
            }
            for (int j = (r+1); j <= (2*r); j++)
            {
                if (j <= i)
                {
                    std::cout << "* ";
                }
                else
                {
                    std::cout << "  ";
                }
                
                
            }
                
        }
       
        std::cout << std::endl;
    }
    
}