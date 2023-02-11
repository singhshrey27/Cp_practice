#include<iostream>
using namespace std;
int binsearch(int arr[],int target,int num)
{  
int start=0;
int end=num-1;
 while(start<=end)
{
   int  mid=start+(end-start)/2;
     if(target>arr[mid])
     {
         start=mid+1;
     }
     else if(target<arr[mid])
     {
         end=mid-1;
     }
     else
{
    return mid;
}
}
    return start;

}
int main()
{
     int arr[]={2,3,5,9,14,16,18};
     int target;
     cin>>target;
     int n=sizeof(arr)/sizeof(arr[0]);
     int result=binsearch(arr,target,n);
     cout<<result;
    return 0;
}