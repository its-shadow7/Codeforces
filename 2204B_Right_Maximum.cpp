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
    vi v (n,0);
    read(v);
 
    priority_queue < pair<int,int>> pq;
    for (int i =n-1;i>=0;i--) 
        pq.push({v[i],i});
    
    int ans = 0;
    int minn = n;
    while (!pq.empty()){
        if (minn>pq.top().second){
            ans ++ ;
            minn = pq.top().second;
            if (minn == 0)break;
        }
        pq.pop();
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