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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    bool arr[d];
    for (int i = 0; i < d; i++)
    {
        if (!((i + 1) % k) || !((i + 1) % l) || !((i + 1) % m) || !((i + 1) % n))
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    cout << count(arr, arr + d, 1);

    return 0;
}