//https://codeforces.com/contest/1748/problem/B

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define M_PI=3.14159265358979323846
#define endl '\n'
#define setbits(x) __builtin_popcountll(x)
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fill0(a) memset(a,0,sizeof(a))
#define ceil2(x,y) ((x+y-1)/(y))
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
const int M=1e9+7;
ll mod(ll x){ return ((x%M)+M)%M; }
ll add(ll a,ll b){ return mod(mod(a)+mod(b)); }
ll mul(ll a,ll b){ return mod(mod(a)*mod(b)); }
ll bexp(ll a, ll b) {
    a %= M;
    if (a == 0) return 0;
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}
ll invmod(ll a) {
    return bexp(a, M - 2);
}
bool sortBySecond(const pair<ll,ll> &a, const pair<ll,ll> &b){ return a.second < b.second; }
vector<ll> getPrimes(){ vector<ll> ans; vector<ll> isPrime(1e6,0);
    for(int i=2;i<1e6;i++){ if(isPrime[i]!=0) continue; for(int j=i+i;j<1e6;j+=i){ isPrime[j]++; }}
    for(int i=2;i<1e6;i++){ if(isPrime[i]==0){ ans.push_back(i); }}
    return ans;
}

void solve(){
    ll n;cin>>n;string s;cin>>s;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll d=0,o=0;
        vector<ll> freq(10);
        for(ll j=i;j<min(i+100,n);j++){
            freq[s[j]-'0']++;
            o=max(o,freq[s[j]-'0']);
            if(freq[s[j]-'0']==1){
                d++;
            }
            if(o<=d){
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}

