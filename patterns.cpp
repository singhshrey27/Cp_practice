#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int originaln=n;
    n=2*n-1;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            int m=originaln-min(min(row,col),min(n-row,n-col));
            cout<<m<<" ";

        }
        cout<<endl;
    }
    return 0;
}