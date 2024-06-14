#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;cin>>n;
    if(n%2==0){
        cout<<"1 3 ";n-=2;
    }
    for(int i=0;i<n;i++) cout<<2<<' ';
    cout<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}