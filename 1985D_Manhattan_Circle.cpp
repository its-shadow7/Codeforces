#include <bits/stdc++.h>
using namespace std;
 
#pragma GCC optimize ("O2")
 
#define ll long long
#define int long long
#define nn '\n'
#define vi vector<int>
#define vii vector<vector<int>>
#define all(x) x.begin(), x.end()
#define read(v) for(auto &x : v) cin >> x
#define show(v) for(auto &x : v) cout << x << " " 
#define pb push_back
 
const int mod = 1e9+7;
 
bool testcases = 1;
 
void solve(){
    int n,m;
    cin >> n >> m;
    vector <vector<char>> v;
    for(int i=0;i<n;i++){
        vector <char> chh(m);
        read(chh);
        v.pb(chh);
    }
 
    vi ft (n,-1);
    int maxx = -1;
    int row = -1;
    int count =0;
    for(int i =0;i<n;i++){
        count = 0;
        for(int j =0;j<m;j++){
            if (v[i][j]=='#') count++;
            if (v[i][j]=='#' and ft[i]==-1) ft[i]=j;
            if (count > maxx) {maxx = count; row = i;}
        }
    }
 
    // for(int i =0;i<n;i++){
    //     show(v[i]);
    //     cout << nn;
    // }
    // cout << nn;
    
    cout << row+1 << " " << (ft[row]+maxx/2+1)  << nn ;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    if(testcases) cin >> test;
    while(test--){
        solve();
    }
    return 0;
}