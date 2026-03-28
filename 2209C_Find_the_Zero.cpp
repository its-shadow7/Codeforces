#include <bits/stdc++.h>
using namespace std;
 
#pragma GCC optimize ("O2")
 
#define ll long long
#define int long long
#define nn endl
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
    for(int i =2;i<n+1;i++){
        cout << "? " <<2*i - 1 << " "<<2*i << nn;
        int ans = 0;
        cin >> ans;
        if (ans==1){cout << "! "<<2*i << nn ; return;}
    }
 
    cout << "? 1 3" << endl ;
    cin >> n;
    if (n==1){ cout << "! 1" <<nn; return;}
    cout << "? 1 4" << nn;
    cin >> n;
    if (n==1){ cout << "! 1" <<nn; return;}
    cout << "! 2" << nn;
    // cout.flush();
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