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
    vi c(m,0);
    vector <pair<int,int>> k;
    
    for(int i=0;i<n;i++){
        int a ,b;
        cin >> a;
        b = i;
        k.pb({a,b});
    }
    
    read(c);
    int low =0;
    sort(all(k),greater<pair<int,int>>());
    int ans =0;
    for(int i =0;i<n;i++){
        if (c[low]!=-1){
            if (k[i].first > low+1) ans+=c[low++];
            else ans += c[k[i].first-1];
        }
    }
 
    cout << ans << nn;
 
 
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