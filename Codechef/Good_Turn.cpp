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
        int a,b;
        cin >> a >> b;
        if(a + b > 6) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}