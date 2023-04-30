#include <bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = ns(s);
    for(int i = 0; i < n; i++) {
        if(s[i] == '-' && s[i + 1] == '-') {
            cout << 2;
            i++;
        }
        else if(s[i] == '-' && s[i + 1] == '.') {
            cout << 1;
            i++;
        }
        else if(s[i] == '.') cout << 0;
    }
    return 0;
}