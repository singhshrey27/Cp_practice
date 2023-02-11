#include<iostream>
using namespace std;
int main()
{
    int q;
     cin>>q;
     while(q--)
     {
         int d,n,sum=0;
         cin>>d>>n;
         while(d--)
         {
             sum=0;
           for(int i=n;i>0;i--)
           {
               sum=sum+i;
           }  
           n=sum;
           
         }
         cout<<sum<<endl;
     }
    return 0;
}