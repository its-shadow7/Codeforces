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
 
const int mod = 1e9+69;
 
bool testcases = 1;
 
void solve(){
    int n,m; cin>>n>>m;
    vii arr(n,vi(m)); for(int i = 0; i<n; i++) read(arr[i]);
    int mx = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            mx = max(mx,arr[i][j]);
        }
    }
    int total = 0;
    vector<int> mxr(n), mxc(m);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j]==mx) mxr[i]++;
        }
        total+=mxr[i];
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(arr[j][i]==mx) mxc[i]++;
        }
    }
    int ans = mx;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int cnt = mxr[i]+mxc[j];
            if(arr[i][j]==mx) cnt--;
            if(cnt==total){
                ans = mx-1;
                break;
            }
        }
        if(ans == mx-1){
            break;
        }
    }
    cout<<ans<<"\n";
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