////......................................................SHIRANSH PRATAP SINGH................................////
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
ll n,m,k,p,q,l,r,i,j,d,x,y,cnt=0;

void solve()
{
  int n;
  int arr1[n],arr2[n];
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>arr1[i];
  }
  for(int i=0;i<n;i++)
  {
      cin>>arr2[i];
  }
  int maxcnt=0;
  int currcnt=0;
  for(int i=0;i<n;i++)
  {
      if(arr1[i]>0&&arr2[i]>0)
      {
        currcnt++;
      }
      else 
      {
         maxcnt=max(currcnt,maxcnt);
         currcnt=0;
          
      }
  }
  maxcnt=max(currcnt,maxcnt);
  cout<<maxcnt<<endl;
}

int main() {
              
            fastio;
            int t;
            cin>>t;
	    while(t--)
	    {
            solve();     
            }
           return 0;
           } 