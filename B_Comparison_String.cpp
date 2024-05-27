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

        string s;

        cin>>s;

        int l=1;
        int ml=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                l++;
            }else{
                ml=max(ml,l);
                l=1;
            }
        }
        ml=max(ml,l);

        cout<<ml+1<<endl;
    }
    return 0;
}