#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;

    // while (t--) {
        long long n,k;
        cin >> n>>k;

        vector<pair<long long,int>> v;

        for (int i = 0; i < n; i++) {
            int x;
            cin >>x ;
            v.push_back({x,i+1});
        }

        sort(v.begin(),v.end());//will get sorted with respect to first element

        vector<int> result;
        long long sum=0;
        for (int i = 0; i < v.size(); i++) {
            sum+=v[i].first;
            if(sum<=k){
                result.push_back(v[i].second);
            }
        }

        cout<<result.size()<<endl;
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout << endl;
    // }
    return 0;
}