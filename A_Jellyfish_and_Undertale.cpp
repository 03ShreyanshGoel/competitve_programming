#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int a,b,n;
        cin >>a>>b>> n;

        vector<long long> v(n);

        long long ans=b;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(1+v[i]<=a){
                ans+=v[i];
            }else{
                ans+=a-1;
            }
        }
        cout << ans<<endl;
    }
    return 0;
}