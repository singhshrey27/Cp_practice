#include<iostream>
using namespace std;
int main()
{
    int q,out=0;
    long int num;
    cin>>q;
    while(q>0)
    {
        cin>>num;
        if(num==2)
        {
            cout<<'2'<<endl;
        }
        else if(num>2)
        {
            out=num-2;
            cout<<out<<endl;
            
        }
        out=0;num=0;q--;
    }
    return 0;
}