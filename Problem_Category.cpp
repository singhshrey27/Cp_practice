#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(1<=x&&x<100)
        {
            cout<<"Easy"<<endl;
        }
        else if(100<=x&&x<200)
        {
            cout<<"Medium"<<endl;
        }
        else{
            cout<<"Hard"<<endl;
        }
    }
return 0;    
}