#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    long double b,result=0;
    cin>>b;
    if((0<a<=2000)&&(0<=b<=2000)&&(a%5==0)&&(b>=a))
    {
        result=b-a-0.50;

    }
    else
    {
        //cout<<setprecision(6)<<fixed;
        cout<<b;
    }
    cout<<setprecision(2)<<fixed;
    cout<<result;
    return 0;
}