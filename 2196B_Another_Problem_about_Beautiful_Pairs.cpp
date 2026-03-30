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
    int n;
    cin >> n;
    vi v(n,0);
    read(v);
 
    int s = sqrt(n);
    int ans = 0;
    for(int i =1;i<=s;i++){
        for(int j=0 ; j<n;j++){
            int val = j - i*v[j];
            if ( val >=0  and val<=n-1 and v[val] == i){
                ans++;
            }
        }
    }
 
    for(int i =0;i<n;i++){
        if (v[i]>s){
            for(int j = i + v[i]; j < n; j += v[i]){
                if (1LL * v[i] * v[j] == j - i){
                    ans++;
                }
            }
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