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
    int a ,b;
    cin >> a >> b;
    int val =0;
    for(int i =31;i>=0;i--){
        if ((1ll<<i ) & a and (1ll<<i )&b)
            val += 1ll<<i;
    }
    // cout << val << nn;
    // cout << a << " " << b << nn;
    int ans =  (a^val) + (b^val);
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