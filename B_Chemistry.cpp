#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int N=n-k;

        string s;
        cin >> s; 


        //calcuate frequency of each element
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        vector<int> fv;
        for (auto it : mp) {
            fv.push_back(it.second);
        }

        // arrange the frequencies in incresing order
        sort(fv.begin(), fv.end());

        //remove the element of odd frequency first
        for(int i=0;i<fv.size() && k>0 ;i++){
            if(fv[i]%2!=0){
                fv[i]--;
                k--;
            }
        }

        //remove remaining k elements 
        int i=0;
        while(k>0){
            while(fv[i]>0 && k>0){
                fv[i]--;
                k--;
            }
            i++;
        }

        
        int odd=0;
        for(int i=0;i<fv.size();i++){
            if(fv[i]%2!=0){
                odd++;
            }
        }

        //now if size of remaining string is odd and there is only one odd occurance element
        // OR,
        // if size of remaining string is even and no odd occurance element is present then it can be rearranged to a palindrome 
        if(N%2==0 && odd==0 || N%2==1 && odd==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
