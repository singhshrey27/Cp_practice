#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int a,b,p,q;
        int x,y;
        cin>>a>>b>>p>>q;
        if((x=p%a)&&(y=q%b)&&(x%2==1)&&(y%2==0))
        {
                cout<<"Yes"<<endl;
            
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}