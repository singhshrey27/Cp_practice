#include<iostream>
using namespace std;
int linsearch(int arr[],int target)
{
    int index,found;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==target)
        {
            found=1;
            index=i;
            break;
        }
    }
    if(found==1)
    {
        return index;
    }
    else
    
        return -1;
        // -1 indicates that the target element is not found

}
int main()
{
    int arr[]={21,3,65,89,45,21};
    int target;
    cin>>target;
    cout<<linsearch(arr,target);
    return 0;
}