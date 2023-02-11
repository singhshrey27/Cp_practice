#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
      int n,count=0;
      cin>>n;
      for(int i=2;i<=9;i++)
      {
          if(n%i==0)
          {
              count++;
          }
      }
      if(count<=1)
      {
cout<<"yes"<<endl;
      }
      else{
          cout<<"no"<<endl;
      }
    }
    return 0;
}