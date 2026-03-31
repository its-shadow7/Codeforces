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
    int n ;
    cin >> n;
    vi v(n,0);
    read(v);
    vi b(n,0);
    read(b);
    int ans = 0;
    for(int i =0;i<n;i++){
        int g= 1;
 
        if (i>0) {
            g = __gcd(v[i],v[i-1]);
        }
 
        if (i<n-1){
            g =   (g * __gcd(v[i],v[i+1])) / (__gcd(g,__gcd(v[i],v[i+1])));
        }
 
        if (g<v[i]){
            ans++;
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