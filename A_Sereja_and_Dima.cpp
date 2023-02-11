#include<iostream>
using namespace std;
int main()
{
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    int j=n-1;
    int serejasum=0;
    int dimasum=0;
    int z=1;
    while(k<=j)
    {
        
        switch (z)
        {
            case 1:
            
        if(arr[j]>arr[k])
        {
            serejasum=serejasum+arr[j];
            j--;
        }
        else 
        {
            serejasum=serejasum+arr[k];
            k++;
        }
        z--;
        break;
            

        case 0:
        
         if(arr[j]>arr[k])
        {
            dimasum=dimasum+arr[j];
            j--;
        }
        else 
        {
            dimasum=dimasum+arr[k];
            k++;

        }
        
        z++;
         break;
        
        
        }
    }
     cout<<serejasum<<" "<<dimasum;   
    

    return 0;
}