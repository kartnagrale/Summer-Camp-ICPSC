//https://codeforces.com/problemset/problem/1903/A

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){ cin>>a[i]; b[i]=a[i]; }
    if(k==1){
        sort(b.begin(),b.end());
        if(a==b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"YES\n";
    }
}   

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}