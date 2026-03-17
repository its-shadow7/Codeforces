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
 
int cost1(vi &v,int idx){
 
    int ans = 0;
    vi temp = v;
 
    for(int i = idx; i < v.size(); i++){
        ans += max(0ll, temp[i-1] - temp[i]);
        temp[i] = max(temp[i], temp[i-1]);
    }
 
    return ans;
}
 
 
int cost2(vi &v,int idx){
    int ans = max(0ll,v[idx-1]-v[idx]);
    vi temp = v;
    temp[idx-1] = temp[idx];
 
    for(int i =idx+1;i<v.size();i++){
        ans += max(0ll, temp[i-1] - temp[i]);
        temp[i] = max(temp[i], temp[i-1]);
    }
 
    return ans;
}
 
 
void solve(){
    int n;
    cin >> n;
    vi v (n,0);
    read(v);
    int ans = 0;
 
    for(int  i=0;i<n;i++){
        v[i] -= i;
    }
 
    priority_queue <int> pq;
    pq.push(v[0]);
    for(int i=1;i<n;i++){
        if (pq.top() > v[i]){
            ans += pq.top() - v[i];
            pq.pop();
            pq.push(v[i]);
        }
        pq.push(v[i]);
    }
 
    cout << ans << nn;;
 
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