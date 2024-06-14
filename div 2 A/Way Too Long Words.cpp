//https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;cin>>s;
    if(s.size()>10){
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
    }else{
        cout<<s<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}