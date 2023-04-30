#include <bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    while(b--) {
        for(int i = 0; i < a - 1; i++) {
            if(s[i] == 'B' and s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s;
    return 0;
}