#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*int makeArray( )
{
    
}*/

int main() 
{
    int numA;
    int numQ;
    cin >> numA >> numQ;
    
    int size;
    for (int i = numA; i > 0 ; i--) 
    {
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++) 
        {
            cin >> array[j];
        }
    }
    return 0;
}
