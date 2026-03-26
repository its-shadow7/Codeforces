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
    string s;
    cin >>s;
    string c;
    c = s;
    int minn = 0;
    int maxx = 0;
    if (s[0] == '1'){minn++; maxx++;}
    if (s[s.length()-1]=='1' and s.length()>2) {minn++;maxx++;}
    for(int i =1;i<n-1;i++){
        if (s[i] == '1') maxx ++;
        else if (s[i-1] == s[i+1] and s[i-1]=='1') {maxx++; s[i] = '1';}
    }
 
 
    for(int i =1;i<n-1;i++){
        if (s[i-1] == s[i+1] and s[i-1]=='1') {s[i] = '0';}
        else if (s[i]=='1') minn++;
    }
    cout << minn << " " << maxx << nn;
 
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