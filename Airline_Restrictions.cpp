#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    int a,b,c,d,e;
    while(q>0)
    {
        cin>>a>>b>>c>>d>>e;
        if((a+b<=d&&c<=e)||(b+c<=d&&a<=e)||(c+a<=d&&b<=e))
        {
           cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        q--;
        a=0;b=0;c=0;d=0;e=0;
    }
    return 0;
}