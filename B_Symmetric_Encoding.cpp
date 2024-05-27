#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        string s;
        int n;
        cin >> n>>s;
        //tlrhgmaoi

        set<char> st;
        unordered_map<char,char> rep;


        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        

        vector<char> unq(st.begin(),st.end());
        //aghilmort

        for(int i=0;i<unq.size()+1/2;i++){
            rep.insert({unq[i],unq[unq.size()-i-1]});
            rep.insert({unq[unq.size()-i-1],unq[i]});

        }

        for(int i=0;i<n;i++){
            s[i]=rep[s[i]];
        }

        cout<<s<<endl;
    }
    return 0;
}