#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;

    // while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int p=1;
        vector<int>result;
        for (int i = 0; i < n; i++) {
            if(v[i]%2!=0){ 
                result.push_back((v[i]+p)/2); 
                p=(-p);
            }
            else{ 
                result.push_back(v[i]/2);
            }
        }

        for(int i=0;i<n;i++){
            cout<<result[i]<<endl;
        }
    // }
    return 0;
}