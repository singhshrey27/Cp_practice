#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       long double bs,hra,da,gs;
       cin>>bs;
       if(bs<1500)
       {
           hra=0.1*bs;
           da=0.9*bs;
       }
       else
       {
           hra=500;
           da=0.98*bs;

       }
       gs=bs+da+hra;
       cout<<setprecision(6)<<fixed;
       cout<<gs<<endl;

    }
    return 0;
}