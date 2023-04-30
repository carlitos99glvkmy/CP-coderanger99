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
    int n,d;
    cin >> n >> d;
    vector<int> v(n);
    for(auto &m : v) cin >> m;
    int ans = -1;
    for(int i = 0; i < n - 1; i++) {
        if(v[i + 1] - v[i] <= d) {
            ans = v[i + 1];
            break;
        }
    }
    cout << ans;
    return 0;
}