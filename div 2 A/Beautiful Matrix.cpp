//https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    vector<vector<int>> a(5,vector<int> (5));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    cout<<abs(r-2)+abs(c-2)<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //ll t;cin>>t;while(t--)
    solve();
}