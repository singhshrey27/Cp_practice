#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
ll n,m,k,p,q,l,r,i,j,d,x,y,cnt=0;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    bool flag=true;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second%2!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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