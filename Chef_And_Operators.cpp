#include<iostream>
using namespace std;
int  main()
{
    long int q,a,b;
    cin>>q;
    while(q>0)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<'>'<<endl;
        }
        else if(b>a)
        {
            cout<<'<'<<endl;
        }
        else
        {
            cout<<'='<<endl;
        }
        a=0;b=0;q--;

    }
    return 0;
}