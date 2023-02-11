#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]+=k;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%7==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}