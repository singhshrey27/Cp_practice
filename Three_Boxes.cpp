#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       int a,b,c,d,count=1;
       cin>>a>>b>>c>>d;
       int sum=a+b+c;
       if(sum==d)
       {
          cout<<count<<endl;
       }
       else
       {
           while(sum>=d)
           {
               count++;
               sum=sum-d;
           }
           cout<<count<<endl;
       }
       }
    return 0;
}