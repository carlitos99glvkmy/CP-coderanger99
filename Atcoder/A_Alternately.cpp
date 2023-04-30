#include <bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}