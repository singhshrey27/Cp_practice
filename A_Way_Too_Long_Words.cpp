#include<iostream>
using namespace std;
int main()
{
    int q,len,i=0;
    cin>>q;
    string s;
    while(q--)
    {
        cin>>s;
        len=s.length();
        if(len<=10)
        {
            cout<<s<<endl;
        }
        else
        {
        int between=len-2;
        cout<<s[i]<<between<<s[len-1]<<endl;
        s.empty();len=0;between=0;
        }
    }
    return 0;
}