#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;cin>>n;
    cout<<(n+1)/2<<'\n';
    vector<int> a1,a2;
    for(int i=0;i<n;i++){
        a1.push_back(3*i+2);
        a2.push_back(3*i+3);
    }
    for(int i=0;i<(n+1)/2;i++){
        cout<<a1[i]<<' '<<a2[n-i-1]<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}