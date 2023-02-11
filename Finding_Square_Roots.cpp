#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,found=0;
        cin>>n;
        int i=0;
        while(n>i)
        {
            if(n%i==i)
            {
                 found=i;
            }
            i++;
        }
        cout<<found<<endl;
    }
    return 0;

}