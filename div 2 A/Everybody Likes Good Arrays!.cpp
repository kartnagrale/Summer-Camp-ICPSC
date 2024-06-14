#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define M_PI=3.14159265358979323846
#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define setbits(x) __builtin_popcountll(x)
#define ff first
#define ss second
#define ceil2(x,y) ((x+y-1)/(y))
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define fr(i,n) for(int i=0;i<n;i++)
const int M=1e9+7;

//---- Debugger ---- //
#define debarr(a,n) cout<<#a<<" : ";for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n";for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const unordered_set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
ll binpow(ll b,ll p,ll mod){ll ans=1;b%=mod;for(;p;p>>=1){if(p&1)ans=ans*b%mod;b=b*b%mod;}return ans;}
//----------------- //

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
    ll n;
    cin>>n;
    vi a(n);
    fr(i,n) cin>>a[i];
    ll ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i]%2==a[i+1]%2){
            ans++;
        }
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}