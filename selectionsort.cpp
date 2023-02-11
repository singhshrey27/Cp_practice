#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selsort(int arr[],int n)
{
    int maxindex=0;
    for(int i=0;i<n-1;i++)
    {
        int max=0;
       // int last=arr[n-i-1];
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                maxindex=j;
            }
        }
        swap(arr[maxindex],arr[n-i-1]);
    }
}
int main()
{
int arr[]={3,5,1,4,2};
int n=sizeof(arr)/sizeof(arr[0]);
selsort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}