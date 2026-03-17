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
    int ans = 0;
    int maxx = -1e10;
    int c = 0;
    for(int i=0;i<n;i++){
        c = max(maxx-v[i],c);
        maxx = max(maxx,v[i]);
    }
 
    if (c <= 0) { cout << 0 << nn; return;}
 
    int val = 0;
    while (c>0){
        c-= pow(2,val++);
    }
    cout <<  val << nn;
 
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