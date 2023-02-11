////......................................................SHIRANSH PRATAP SINGH................................////
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define ump unordered_map
#define st  set
ll n,m,k,p,q,l,r,i,j,d,x,y,cnt=0;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0,count1=0;
    unordered_map<int,int> mp;
     int i=0,j=0;
     while(j<n){
        if(j<4)
        {
            mp[s[j]]++;
            j++;
            if(mp[s[j]]==1){
                count++;
            }
        }
        else if(j-i+1==4){
            if(count==4){
                count1++;
            }
            i++;j++;
            mp[s[j]]++;
            
            
        }
     } 
    return 0;
}