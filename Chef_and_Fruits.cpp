#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=0;i<k;i++)
        {
            if(n>m)
            {
                m++;
            }
            else if(n<m)
            {
                n++;
            }
        }
        int count=0;
        if(n==m)
        {
            cout<<count<<endl;
        }
        else if(n>m)
        {
            count=n-m;
            cout<<count<<endl;
        }
        else
        {
            count=m-n;
            cout<<count<<endl;
        }
    }
    return 0;
}