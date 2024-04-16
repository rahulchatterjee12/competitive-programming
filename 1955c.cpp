#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <climits>
#include <unordered_map>
#include <numeric>
using namespace std;
#define mst(x, y) memset(x, y, sizeof x)
#define X first
#define Y second
#define int long long
#define FAST ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
const int N = 200010, INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const double EPS = 1e-6;
typedef pair<int, int> PII;
typedef unordered_map<int, int> Ump;
int T;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        signed long long k;
        cin >> n >> k;
        deque<signed long long> ships(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> ships[i];
        }

        while (ships.size() > 1 && k)
        {
            signed long long mn = min(ships.front(), ships.back());
            if (k <= 2 * mn)
            {
                ships.front() -= k / 2 + k % 2;
                ships.back() -= k / 2;
                k = 0;
            }
            else
            {
                ships.front() -= mn;
                ships.back() -= mn;
                k -= 2 * mn;
            }
            if (ships.front() == 0)
            {
                ships.pop_front();
            }
            if (ships.back() == 0)
            {
                ships.pop_front();
            }
        }
        int ans = n - ships.size();
        cout << ans + (ships.size() && ships.front() <= k) << endl;
    }
    return 0;
}