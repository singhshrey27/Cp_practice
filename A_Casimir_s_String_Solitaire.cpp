#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int q;
        cin>>q;
        while(q--)
        {
            string s;
            cin>>s;
            int a=0,b=0,c=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='A')
                {
                    a++;
                   
                }
                else if(s[i]=='B')
                {
                    b++;
                }
                else 
                {
                    c++;
                }

            }
            if(a+c==b)
            {
                cout<<"yes";
            }
            else 
            {
                cout<<"no";
            }
        }
       return 0;
    }
