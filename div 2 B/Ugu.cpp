#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    int i=0;
    while(s[i]=='0') i++;
    while(s[i]=='1') i++;
    i--;
    int ans=0;
    for(int j=n-1;j>i;j--){
        if(s[j]!=s[j-1]){
            ans++;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}