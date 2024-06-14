//https://codeforces.com/problemset/problem/1890/A

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()<2){
        cout<<"Yes\n";
    }else if(m.size()>2){
        cout<<"No\n";
        return;
    }else{
        int i=0;
        int c1,c2;
        for(auto x:m){
            if(i==0){
                c1=x.second;
                i++;
            }else{
                c2=x.second;
            }
        }
        if(abs(c1-c2)>1)cout<<"No\n";
        else{
            cout<<"Yes\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}