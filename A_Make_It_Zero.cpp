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

        int ans=0;
        int s=0;
        int start=1; //1-based indexing
        vector<pair<int,int>>result;
        for (int i = 0; i < v.size(); i++) {
            s^=v[i];
            if(s==0){
                ans++;
                int end=i+1; //1-based indexing
                result.push_back({start,end});
                start=++end;
                s=0;
            }
        }
        cout <<ans<< endl;
        for(auto it : result){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}