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
    int n,k;
    cin >> n >> k;
    vi v(n,0);
    read(v);
    int ans =0;
    long double summ = 0;
    for(int i =0;i<n;i++){
        summ+=v[i];
    }
 
    while (round(summ/v.size()) < k){
        summ+=k;
        v.pb(k);
        ans++;
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