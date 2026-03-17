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
    int n;
    cin >> n;
    vi a(n,0);
    read(a);
    vi b(n,0);
    read(b);
 
    int ans =0;
    // for(int i=0;i<n;i++){
    // }
 
    vi c(n,0);
    for(int i =0;i<n;i++){
        c[i] = a[i]-b[i];
    }
    sort(all(c));
 
    int l=0;
    int r = n-1;
 
    while ( l<r){
 
        if (c[r]+c[l] > 0){
            ans += r-l;
            r--;
        }
        else    l++;
    }
 
    // show(c);
 
 
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