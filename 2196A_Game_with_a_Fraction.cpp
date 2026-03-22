#include <bits/stdc++.h>
using namespace std;
 
#define nn endl
#define input cin
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define MAX(x) *max_element(x.begin(), x.end())
#define MIN(x) *min_element(x.begin(), x.end())
 
int main() {
    fastio;
int t;
    cin >> t;
 
    while (t--) {
        long long p, q;
        cin >> p >> q;
        long long low = 0;
        long long high = min(p, q);
        long long ans = -1;
 
        if (3ll * p < 2ll*q) {
            cout << "Alice\n";
            continue;
        }
 
        while (low <= high) {
            long long mid = low + (high - low) / 2;
 
            long long pp = 3ll * (p - mid);
            long long qq = 2ll *(q - mid);
 
           if (abs(pp - qq) < 1e-9 && pp != 0) {
                ans = mid;
                break;
            }
            else if ((pp-qq) > 0) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
 
        if (ans != -1)
            cout << "Bob\n";
        else
            cout << "Alice" << nn;
    }
 
    return 0;
}