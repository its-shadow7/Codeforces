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
    int n,k,p,m;
    cin >> n >> k >> p >> m;
    vi v(n);
    read(v);
    int ans = 0;
    int win = p - 1;
 
    while (m > 0) {
 
        int cheap = 1e9;
        for (int i = 0; i < k; i++) {
            cheap = min(cheap, v[i]);
        }
        if (win < k) {
            if (m < v[win]) break;
            ans++;
            m -= v[win];
            int val = v[win];
            v.push_back(val);
            v.erase(v.begin() + win);
            win = v.size() - 1;
        }
        else {
            if (m < cheap) break;
            m -= cheap;
            v.push_back(cheap);
            auto it = find(v.begin(), v.end(), cheap);
            if (it != v.end()) v.erase(it);
            win--;
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