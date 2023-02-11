#include<iostream>
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
        int n=s.size();
        //int m=n/2;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[n-1]||s[i]==s[n-2]||s[i+1]==s[n-1]||s[i+2]==s[n-2])
            count++;
        }
        if(count==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}