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
    vi v(n,0);
    read(v);
    int ans =0;
    map <int,int> freq;
    for(int i =0;i<n;i++)
        freq[v[i]%4]++;
    
    ans += min(freq[3],freq[1]);
    freq[3] -= ans;
    freq[1] -=ans;
 
    ans+= freq[3];
    if (freq[2]%2)
        freq[1] = max(0ll,freq[1]-2);
    ans+= (freq[2]+1)/2;
    ans+= (freq[1]+3)/4;
    ans+= freq[0];
 
    cout << ans<<nn;
    
 
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