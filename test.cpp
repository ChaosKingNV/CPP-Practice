#include <iostream>
using namespace std;


int main() {
    
    int numA;
    int numQ;
    cin >> numA >> numQ;
    
    
    int arrayA[numA][100];
    for (int i = 0; i < numA; i++) 
    {
        arrayA[i][0] = i;
    }  
    
    int size;
    int i = 0;
    while (arrayA[i][0] < numA) 
    {
        cin >> size;
        
        for (int j = 1; j <= size ; j++) 
        {
            cin >> arrayA[i][j];
        }
        
        i++;
    }
    
    for (int i = 0; i < numQ; i++) 
    {
        int q1;
        int q2;
        cin >> q1 >> q2;
        
        cout << arrayA[q1][(q2+1)];
    }
    return 0;
}

