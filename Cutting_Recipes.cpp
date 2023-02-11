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
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int max=arr[0];
       for(int i=0;i<n;i++)
       {
           if(arr[i]>max)
           {
               max=arr[i];
           }
       }
       for(int i=0;i<n;i++)
       {
           int r;
           r=max/arr[i];
           cout<<r<<" "<<endl;
       }
}
    return 0;
}