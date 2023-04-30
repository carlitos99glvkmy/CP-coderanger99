#include <bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            int x;
            cin >> x;
            if(x == 1) {
                cout << (abs(3 - i) + abs(3 - j));
                break;
            }
        }
    }
    return 0;
}