#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        int arr[n];
        int count=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                  if(arr[i]==arr[j]||arr[j]>arr[i])
                  {
                      count++;
                  }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}