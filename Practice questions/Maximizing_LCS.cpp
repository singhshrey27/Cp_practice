/*...............shiransh pratap singh...........................*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
ll n,m,k,p,q,l,r,i,j,d,x,y,cnt=0;
void solve()
{
     int shrey;
        cin>>shrey;
        string a;
        cin>>a;
        string b=a;
        reverse(a.begin(),a.end());
        vector<vector<int>>m(shrey+1,vector<int>(shrey+1,0));
        for(int j=1;j<=shrey;j++)
        {
            for(int i=1;i<=shrey;i++)
            {
            if(b[j-1]==a[i-1])
            m[j][i]=1+m[j-1][i-1];
            else
            m[j][i]=max(m[j-1][i],m[j][i-1]);
            }
        }
    int s=m[shrey][shrey]/2;
    cout<<s<<endl;
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