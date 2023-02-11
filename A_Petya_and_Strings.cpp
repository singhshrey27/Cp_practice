#include<iostream>
using namespace std;
int main()
{
   string s,t,count=0;
   cin>>s>>t;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]==t[i])
       {
           count++;
       }
   }
    if(count==s.length())
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
   
    return 0;
}