#include <bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(c >= a and c < b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}