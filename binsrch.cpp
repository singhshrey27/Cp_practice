#include<iostream>
using namespace std;
int binsearch(int arr[],int target,int num)
{  
int start=0;
int end=num-1;
 while(start<=end)
{
   int  mid=start+(end-start)/2;
     if(target==arr[mid])
     {
        return mid;
     }
     else if(target<arr[mid])
     {
         end=mid-1;
     }
     else
     {
         start=mid+1;
     }

    }
    return ;

}
int main()
{
     int arr[]={5,6,8,12,17,25,28,49,56};
     int target;
     cin>>target;
     int n=sizeof(arr)/sizeof(arr[0]);
     int result=binsearch(arr,target,n);
     result==-1?cout<<"Element is not present":cout<<"Element is present at index :"<<result;
    return 0;
}