#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
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

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

string s;

bool check(ll x) {
  if (0 == x % 3) {
    return true;
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;

  if (1 == s.length()) {
    cout << 0 << '\n';
    cout << (check(s[0] - '0') ? "YES" : "NO");
    return 0;
  }

  auto x = 0LL;
  for (const auto& c : s) {
    x += (c - '0');
  }

  auto ans = 1LL;
  while (10 <= x) {
    auto y = x;
    auto nx = 0LL;
    while (0 < y) {
      nx += y % 10;
      y /= 10;
    }

    x = nx;
    ++ans;
  }

  cout << ans << '\n';
  cout << (check(x) ? "YES" : "NO");

  return 0;
}