#include<iostream>
using namespace std;
int main()
{
    int j,i,sum=0,maxsum=0,arr[10],size,k;
    cin>>size>>k;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    i=0;j=0;
    while(j<size)
    {
        sum=sum+arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            maxsum=max(maxsum,sum);
            sum=sum-arr[i];
            i++;j++;
        }
    }
    cout<<maxsum;
    return 0;
}