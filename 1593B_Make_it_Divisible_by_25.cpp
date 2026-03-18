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
    string s;
    cin >> s;
 
    int ans1 = 0;
    int n = s.length();
    n-=1;
    int five = 0;
    
    for(int i =n;i>=0;i--){
        if (s[i] == '5' and five ==0){
            five = 1;
        }
        else if (five and (s[i] == '2' || s[i]=='7'))
            break;
        else ans1++;
    }
 
 
 
    int ans2 = 0;
    int zero = 0;
 
    for(int i=n;i>=0;i--){
        if (s[i]=='0' and zero==0) zero++;
        else if ((s[i]=='0' || s[i]=='5') and zero==1) break;
        else ans2++;
    }
 
    cout << min(ans1,ans2) << nn ;
 
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