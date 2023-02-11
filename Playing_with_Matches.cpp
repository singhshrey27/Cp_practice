#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,count=0,sum=0;
        cin>>a>>b;
         sum=a+b;
        while(sum>0)
        {
            int rem=0;
            rem=sum%10;
            sum=sum/10;
            if(rem==0||rem==6||rem==9)
            {
                count+=6;
            }
            else if(rem==1)
            {
                count+=2;
            }
            else if(rem==2||rem==3||rem==5)
            {
                count+=5;
            }
            else if(rem==4)
            {
                count+=4;
            }
            else if(rem==7)
            {
                count+=3;
            }
            else 
            {
                count+=7;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}