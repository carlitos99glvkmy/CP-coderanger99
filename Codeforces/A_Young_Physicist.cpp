#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iomanip>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ns(x) (int)(x.size())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    int xx = 0, yy = 0, zz = 0;
    while(tt--) {
        int x, y , z;
        cin >> x >> y >> z;
        xx += x;
        yy += y;
        zz += z;
    }
    cout << (xx == 0 && zz == 0 && yy == 0 ? "YES" : "NO");
    return 0;
}