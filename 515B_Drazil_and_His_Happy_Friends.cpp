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
    int n,m;
    cin >> n >> m;
    vi b(n,0);
    vi g(m,0);
    int x;
    cin >> x;
    for(int i =0;i<x;i++){
        int a;
        cin >> a;
        b[a] = 1;
    }
    int y;
    cin >> y;
    for(int i = 0;i<y;i++){
        int a;
        cin >> a;
        g[a] = 1;
    }
 
    if (__gcd(n,m)==1 and ( x or y)) cout << "Yes" << nn;
    else {
        int val = __gcd(n,m);
        for(int i =0;i<n;i++){
            if (b[i]){
                set <int> s;
                int j = 0;
                while(s.find((j*n+i)%m)==s.end()){
                    g[(j*n+i)%m] = 1;
                    s.insert((j++*n+i)%m);
                }
            }
        }
 
        for(int i =0;i<m;i++){
            if (g[i]){
                set <int> s;
                int j = 0;
                while(s.find((j*m+i)%n)==s.end()){
                    b[(j*m+i)%n] = 1;
                    s.insert((j++*m+i)%n);
                }
            }
        }
        for(int i =0;i<n;i++){
            if (b[i]){
                set <int> s;
                int j = 0;
                while(s.find((j*n+i)%m)==s.end()){
                    g[(j*n+i)%m] = 1;
                    s.insert((j++*n+i)%m);
                }
            }
        }
 
        if (count(all(b),1) + count(all(g),1) == n+m) cout << "Yes" << nn;
        else cout << "No" << nn;
    }
 
 
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