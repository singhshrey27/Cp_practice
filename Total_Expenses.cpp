#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       int qn,pr;
       cin>>qn>>pr;
       double totprice=0;
       totprice=qn*pr;
       if(qn>1000)
       {
           totprice=totprice-0.1*totprice;
       }
       cout<<setprecision(6)<<fixed;
       cout<<totprice<<endl;

    }
    return 0;
}