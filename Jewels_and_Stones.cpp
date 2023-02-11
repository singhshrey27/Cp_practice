#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string j,s;
        cin>>j;
        cin>>s;
        int n=j.length();
        int m=s.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<m;k++)
            {
                if(s[i]==j[k])
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
