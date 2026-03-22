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
 
    for(int i=0;i<n;i++){
        int big =0;
        int small=0;
        for(int j=i+1;j<n;j++){
            if (v[j]>v[i]) big++;
            else if (v[j]<v[i]) small++;
        }
        cout << max(big,small) << " ";
    }
    cout << nn;
 
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