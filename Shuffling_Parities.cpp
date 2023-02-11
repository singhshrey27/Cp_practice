#include<iostream>
using namespace std;
void swap( int *a, int *b)
{ 
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        
     int i,n,a[n],b[n],sum=0;
     sum=0;
     cin>>n;
     for(i=0;i<n;i++)
      {
          cin>>a[i];
      }  
      for(i=1;i<=n;i++)
      {
         // int m=(a[i]+1)%2;
          if((a[i-1]+i)%2!=1)
          {
             swap(a[i-1],a[i]);
          }
      }
      
      for( i=0;i<n;i++)
      {
          
          b[i]=(a[i]+i+1)%2;
      }
      for(i=0;i<n;i++)
      {
          sum=sum+b[i];
      }
      cout<<sum<<endl;
      n=0;
        
    }
    return 0;
}