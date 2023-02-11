#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,1,-2,4,-1,-4,6};
    int maxsum=0,sum=0;
    for(int i=0;i<7;i++)
    {
        for(int j=i;j<7;j++)
        {
            sum=sum+arr[j];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
        }

    }
    cout<<maxsum;
    return 0;
}