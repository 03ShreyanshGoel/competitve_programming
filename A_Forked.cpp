#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int a, b, xp, yp, xq, yq;
        cin >> a >> b >> xp >> yp >> xq >> yq;

        set<pair<int, int>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {-b, a}, {b, -a}, {-b, -a}
        };

        set<pair<int, int>> set1;
        set<pair<int, int>> set2;

        for (auto move : moves) {
            set1.insert({xp + move.first, yp + move.second});
            set2.insert({xq + move.first, yq + move.second});
        }

        int ans = 0;

        for (auto p : set1) {
            if (set2.find(p) != set2.end()){
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
