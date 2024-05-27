#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n>>k;

        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        int l=1;
        int ml=1;
        for (int i = 1; i < v.size(); i++) {
            if(v[i]-v[i-1]<=k){
                l++;
            }else{
                ml=max(l,ml);
                l=1;
            }
        }
        ml=max(l,ml);
        cout << n-ml<<endl;
    }
    return 0;
}