#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,vs,ve;
        cin>>n>>vs>>ve;
        int ts=0,te=0;
        te=n*ve;
        ts=n*sqrt(2)*vs;
        if(te>ts)
        {
            cout<<"Elevator"<<endl;
        }
        else
        {
            cout<<"Stairs"<<endl;
        }
    }
    
    return 0;
}