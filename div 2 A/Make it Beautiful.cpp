//https://codeforces.com/contest/1783/problem/A

/*
    Author       :   Kartik Nagrale
    Codeforces   :   https://codeforces.com/profile/Kartiknagrale
    Codechef     :   https://www.codechef.com/users/kartiknagrale
    Leetcode     :   https://leetcode.com/u/kartikknagrale/
    Github       :   https://github.com/kartnagrale
    Atcoder      :   https://atcoder.jp/users/Kartiknagrale
    Connect      :   https://www.linkedin.com/in/kartik-nagrale/
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    map<int,int> m;
    for(int i=0;i<n;i++){ cin>>a[i];m[a[i]]++;}
    if(m.size()==1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        sort(a.begin(),a.end(),greater<int>());
        swap(a[1],a[n-1]);
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}