#include<iostream>
using namespace std;
int main()
{
    float hardness=50,carboncontent=0.7,tensilestgth=5600;
    float x=hardness,y=carboncontent,z=tensilestgth;
    int q;
    cin>>q;
    while(q--)
    {
      float h,cc,ts;
      cin>>h>>cc>>ts;
      if(h>x&&cc<y&&ts>z)
      {
          cout<<10<<endl;

      }
      else if(h>x&&cc<y)
      {
          cout<<9<<endl;
      }
      else if(cc<y&&ts>z)
      {
          cout<<8<<endl;
      }
      else if(h>x&&ts>z)
      {
          cout<<7<<endl;
      }
      else if(h>x||cc<y||ts>z)
      {
          cout<<6<<endl;
      }
      else
      {
          cout<<5<<endl;
      }
      
    }
    return 0;
}