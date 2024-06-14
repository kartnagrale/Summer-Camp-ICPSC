//https://codeforces.com/contest/1925/problem/A

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define M_PI=3.14159265358979323846
const int M=1e9+7;
ll mod(ll x){ return ((x%M)+M)%M; }
ll add(ll a,ll b){ return mod(mod(a)+mod(b)); }
ll mul(ll a,ll b){ return mod(mod(a)*mod(b)); }
ll binaryExponentiation(ll a,ll b){
    if(b==0) return 1;
    ll ans = binaryExponentiation(a,b/2);
    if(b%2==1) return mul((mul(ans,ans)),a);
    else return mul(ans,ans);
}
bool sortBySecond(const pair<ll,ll> &a, const pair<ll,ll> &b){ return a.second < b.second; }

void solve(){
    ll n,k;cin>>n>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<char(j+97);
        }
    }
    cout<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}