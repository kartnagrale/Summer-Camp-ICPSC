//https://codeforces.com/problemset/problem/1972/A

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<=b[j]){
                ans++;
                b[j]=-1;
                break;
            }
        }
    }
    cout<<n-ans<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}