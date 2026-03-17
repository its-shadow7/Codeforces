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
    string ans = "";
 
    if (s[0]=='R' && isdigit(s[1]) and s.find('C')!=-1){
        int i =1;
        string temp="";
        
        while (isdigit(s[i])){
            temp += s[i];
            i++;
        }
    
        i++;
 
        int val =0;
        while(i<s.length()){
            val*=10;
            val+=s[i++]-'0';
        }
 
        while(val>0){
            val--;
            ans = char(val%26 + 'A') + ans;
            val/=26;
        }
        
 
        ans = ans + temp;
    }
    else{
        ans+="R";
        int i =0;
        int val=0;
        while (isalpha(s[i])){
            val*=26;
            val+=s[i]-'A'+1;
            i++;
        }
 
        while(i<s.length()){
            ans+=s[i++];
        }
 
        ans += 'C';
        ans += to_string(val);
    }
 
    cout<< ans<< nn;
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