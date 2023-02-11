#include<iostream>
using namespace std;
int main()
{
    int q,a,b,c;
    cin>>q;
    while(q--)
    {
      cin>>a>>b>>c;
      if(a<b&&a<c)
      {
          cout<<"Draw"<<endl;
      }
      else if(b<a&&b<c)
      {
          cout<<"Bob"<<endl;
      }
      else
      {
          cout<<"Alice"<<endl;
      }
      a=0;b=0;c=0;
}
          return 0;
}
