//https://codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int> a(n-1);
    int total=0;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        total+=a[i];
    }
    cout<<0-total<<"\n";
}
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    solve();
}