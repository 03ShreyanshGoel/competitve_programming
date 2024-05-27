#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> factors;
        ll limit = sqrt(n);
        for (ll i = 1; i <= limit; i++) {
            if (n % i == 0) {
                factors.push_back(i);
                if (i != n / i) factors.push_back(n / i);
            }
        }

        sort(factors.begin(), factors.end());

        ll len = 1;
        ll maxLen = 1;

        for (int i = 1; i < factors.size(); i++) {
            if (factors[i] == factors[i - 1] + 1) {
                len++;
            } else {
                maxLen = max(maxLen, len);
                len = 1;
            }
        }
        maxLen = max(maxLen, len);

        cout << maxLen << endl;
    }
    return 0;
}
