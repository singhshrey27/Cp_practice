#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector <int> a;
        vector <int> b;
        for(int i=0;i<n;i++)
        {
            a.push_back(a[i]);
        
        }
          for(int i=0;i<n;i++)
        {
            b.push_back(b[i]);
        
        }
        
        int  arr[60];
        for(int i=0;i<n;i++)
        {
            int temp;
            arr[i]=a[i]*20-b[i]*10;
           // arr.push_back(temp);
            temp=0;
        }
  //cout<<*max_element(arr.begin(),arr.end())<<endl;
         int max;
          for(int i=0;i<n;i++)
          {
              max=0;
              if(arr[i]>max)
              {
                  max=arr[i];
              }
          }
         cout<<max<<endl;

    }
    return 0;
}
