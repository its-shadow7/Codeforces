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
    vi v[n];
 
    vi a(n,0);
    vi b(n,0);
    read(a);
    read(b);
 
    for(int i =0;i<n;i++){
        v[a[i]-1].pb(b[i]);
    }
 
    for(int i =0;i<n;i++){
        sort(all(v[i]), greater<int>());
    }
 
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<v[i].size();j++)
    //         cout << v[i][j] << " ";
    //     cout << nn ;
    // }
 
    for(int i =0;i<n;i++){
        for(int j =1;j<v[i].size();j++){
            v[i][j] = v[i][j-1] + v[i][j];
        }
    }
 
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<v[i].size();j++)
    //         cout << v[i][j] << " ";
    //     cout << nn ;
    // }
 
    vi answers (n,0);
 
    for(int i =0;i<n;i++){
        for(int j=1;j<=min(n,(long long)v[i].size());j++){
            answers[j-1] += v[i][(v[i].size()/j)*j-1]; 
        }
    }
 
    show(answers);
    cout << nn ;
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<v[i].size();j++)
    //         cout << v[i][j] << " ";
    //     cout << nn ;
    // }
 
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