#include<iostream>
using namespace std;
int binsearch(int arr[], int target,int s,int e)
{
    if(s>e)
    {
        return -1;
    }
    int m=s+(e-s)/2;
    if(arr[m]==target)
    {
        return m;
    }
    else if(arr[m]<target)
    {
        return binsearch(arr,target,s=m+1,e);
    }
    else //if(arr[m]>target)
    {
    return binsearch(arr,target,s,e=m-1);
    }
}
int main()
{
    int arr[]={1,2,3,4,55,66,78};
    int target;
    cin>>target;
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    cout<<"Element is present at the index:"<<binsearch(arr,target,s,e);
    return 0;
}