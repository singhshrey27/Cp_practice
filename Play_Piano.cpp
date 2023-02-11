#include<bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i+2)
        {
            for(int j=i;j<1;j++)
            {
                 if(s[j]=='A'&&s[j+1]=='B'||s[j]=='B'&&s[j+1]=='A')
                 {
                     count++;
                 }
            }
        }
             if(count==n/2)
             {
                 cout<<"yes"<<endl;
             }
             else
             {
                 cout<<"no";
             }
    }
    return 0;
}