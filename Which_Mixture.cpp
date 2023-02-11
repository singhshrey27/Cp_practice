#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(a>0&&b>0)
        {
            cout<<"Solution"<<endl;
        }
        else if(a>0&&b==0)
        {
              cout<<"Solid"<<endl;
        }
        else
        {
            cout<<"Liquid"<<endl;
        }
    }
    return 0;
}