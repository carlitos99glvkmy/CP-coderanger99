#include <bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
bool isBeautiful(int x) {
    int a = x / 1000;
    int b = (x % 1000) / 100;
    int c = ((x % 1000) % 100) / 10;
    int d = (x % 10);
    return (a != b and a != c and a != d) && (b != a and b != c and b != d) && (c != a and c != b and c != d) && (d != a and d != b and d != c);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    do {
        x++;
    }while(!isBeautiful(x));
    cout << x;
    return 0;
}