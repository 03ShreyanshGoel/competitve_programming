#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int x,y,rem_x;
        cin>>x>>y;

        rem_x=((y+1)/2)*15-4*y;
        int ans=(y+1)/2;
        if(x>rem_x){
            ans+=(x-rem_x)/15;
            if((x-rem_x)%15!=0) ans+=1;
        }

        cout<<ans<<endl;
    }
    return 0;
}