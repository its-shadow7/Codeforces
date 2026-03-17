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
    map <int,int> freq;
    cin >> n;
    vi a(n,0);
    read(a);
    int m;
    cin >> m;
    vi b(m,0);
    read(b);
    int maxx = 0;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if (b[j]%a[i]==0) { int x = b[j]/a[i]; freq[x]++ ; maxx=max(maxx,x);} 
        }
    }
 
    cout << freq[maxx] << nn;
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