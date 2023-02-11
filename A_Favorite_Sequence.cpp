#include<iostream>
using namespace std;
int main()
{
    int q,n;
    int arr[n],b[n];
    cin>>q;
    while(q--)
    {
        cin>>n;
        int i=0;
        int j=n-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int z=0;
        while(i<=j)
        {
            
            switch(z)
            {
            case 0:
            b[i]=arr[i];
            i++;z++;
            break;
            case 1:
            b[j]=arr[i];
            i++;j--;z--;
            break;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
    }
    

    
    return 0;
}