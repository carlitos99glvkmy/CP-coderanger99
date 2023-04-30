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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = -1, y = -1, z = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '|' && x == -1) x = i;
        else if(s[i] == '|' && y == -1) y = i;
        if(s[i] == '*') z = i; 
    }
    cout << (z > x && z < y ? "in" : "out");
    return 0;
}