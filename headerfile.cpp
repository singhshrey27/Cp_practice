#include<iostream>
using namespace std;
/*void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}*/
void sort(int arr[],int size)
{
     for(int i=0;i<size-1;i++)
     {
         for(int j=1;j<size-i;j++)
         {
             if(arr[j]<arr[j-1])
             {
                 int temp=arr[j];
                 arr[j]=arr[j-1];
                 arr[j-1]=temp;
             }
         }
     }
}
int main()
{
    int arr[]={3,5,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}