#include<iostream>
using namespace std;
int main()

{
    int q;
    int a,b,n;
    int count=0,count1=0;
    string s;
    cin>>q;
    while(q>0)
    {
        
        cin>>n>>a>>b;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
              count++;
            }
            else
            {
                count1++;
            }
        }
        int totaltime;
        totaltime=count*a+count1*b;
        cout<<totaltime<<endl;
        count=0;q--;n=0;a=0;b=0;s.empty();count1=0;totaltime=0;
    }
    return 0;
}