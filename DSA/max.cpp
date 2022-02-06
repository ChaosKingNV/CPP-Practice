#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(int i=1;i<n;i++)
        {
             if(arr[i-1]==arr[i])
             {
                 if(arr[i]+1==arr[i+1])
                 {
                     arr[i]=arr[i]+1;
                 }
                 else
                 {
                     arr[i]=arr[i]+2;
                 }
                 count++;
             }
        }
        cout<<count<<endl;
    }
}