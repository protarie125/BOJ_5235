#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll t, k;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  while (0 < (t--)) {
    cin >> k;
    ll e = 0;
    ll o = 0;
    while (0 < (k--)) {
      ll x;
      cin >> x;
      if (0 == x % 2) {
        e += x;
      } else {
        o += x;
      }
    }

    if (o < e) {
      cout << "EVEN";
    } else if (e < o) {
      cout << "ODD";
    } else {
      cout << "TIE";
    }
    cout << '\n';
  }

  return 0;
}