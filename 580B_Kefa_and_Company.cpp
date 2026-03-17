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
 
bool testcases = 0;
 
void solve(){
    int n,diff;
    cin >> n >> diff;
    vector <pair<int,int>> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
 
    sort(all(v));
 
    int ans =0;
    int curr =0;
    int end =0;
    int start = 0;
 
    // for(int i =0;i<n;i++){
    //     cout << v[i].first << " " << v[i].second << nn;
    // }
 
    while (end < n){
 
        curr += v[end++].second;
        // cout << (v[end].first - v[start].first) << nn;
        while(start < n and ((v[end-1].first - v[start].first) >= diff) )
            curr -= v[start++].second;
        
        ans = max(ans,curr);
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