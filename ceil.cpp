#include<iostream>
using namespace std;
int binsearch(int arr[],int target,int num)
{  
int start=0;
int end=num-1;
 while(start<=end)
{
   int  mid=start+(end-start)/2;
    
     if(arr[mid]==target)
     {
         return target;
     }
     else if(target<arr[mid])
     {
         end=mid-1;
     }
     else if(target>arr[mid])
     {
         start=mid+1;
     }
     else
     {
     return arr[mid+1];
     }

}
}
int main()
{
     int arr[]={5,6,8,12,17,25,28,49,56};
     int target;
     cin>>target;
     int n=sizeof(arr)/sizeof(arr[0]);
     int result=binsearch(arr,target,n);
     cout<<result;
    // result==-1?cout<<"Element is not present":cout<<"Element is present at index :"<<result;
    return 0;
}