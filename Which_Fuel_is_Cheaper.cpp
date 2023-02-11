#include<iostream>
using namespace std;
int main()
{
    int q;
    while(q--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        x=x*k;
        y=y*k;
        for(int i=0;i<k;i++)
        {
           x=x+a;
           y=y+b;
        }
        if(x<y)
        {
            cout<<"PETROL"<<endl;
        }
        else if(x>y)
        {
            cout<<"DIESEL"<<endl;
        }
        else
        {
            cout<<"SAME PRICE"<<endl;
        }

    }
    return 0;
}