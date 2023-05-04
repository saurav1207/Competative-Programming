#include <bits/stdc++.h>
using namespace std;

int main() {
    int tCase;
    cin >> tCase;
    
    while (tCase--) {
        int x;
        cin >> x;
        int ans;
        if (x % 10 == 0) {
            ans = 100 - x;
        } else if (x % 10 < 5) {
            ans = 100 - (x / 10) * 10;
        } else {
            ans = 100 - (x / 10) * 10 - 10;
        }
        cout << ans << endl;
    }
    return 0;
}
