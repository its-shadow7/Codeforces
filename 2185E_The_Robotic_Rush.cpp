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
    int n,m,l;
    cin >> n >> m >> l;
    vi pos(n,0);
    vi spike(m,0);
    read(pos);
    read(spike);
    sort(all(spike));
    string s;
    cin >> s;
    l+=1;
    vi maxx(l,0);
    vi minn(l,0);
    vi ans(l,0);
    ans[0] = n;
    int val = 0;
 
 
    for(int i =1;i<l;i++){
        if (s[i-1]=='L') val--;
        else val++;
        maxx[i] = max(maxx[i?i-1:0],val);
        minn[i] =(min(minn[i?i-1:0],val));
    }
 
 
    for(int i=1;i<l;i++) minn[i] = abs(minn[i]);
 
    for(int i =0;i<n;i++){
 
        auto it = upper_bound(spike.begin(), spike.end(), pos[i]);
 
        int high = it - spike.begin();
        int low = high - 1;
 
 
        int val = l;
        
        // cout << low << " " << high << nn;
        if (low >= 0) {
            int target = pos[i] - spike[low];
 
            auto it2 = lower_bound(minn.begin(), minn.end(), target);
 
            if (it2 != minn.end()) {
                val = min(val, (int)(it2 - minn.begin()));
            }
        }
 
        if (high!=m){
            int target =spike[high] - pos[i]; 
            auto it2 = lower_bound(maxx.begin(), maxx.end(), target);
            if (it2 != maxx.end()) {
                val = min(val, (int)(it2 - maxx.begin()));
            }
        }
        if (val!= l){
            ans[val]--;
        }
 
    }
 
    for(int i =1;i<l;i++) ans[i] = ans[i] + ans[i-1];
 
    for(int i= 1;i<l;i++) cout << ans [i] << " ";
    cout << nn;
    // show(maxx);
    // cout << nn;
    // show(minn);
    // cout << nn;
 
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