#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = v.size()-2; i >=0 ; i--) {
            v[i]=max(v[i+1]+1,v[i]);
        }
        for (int i = 0; i < v.size(); i++) {
            cout<<v[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}