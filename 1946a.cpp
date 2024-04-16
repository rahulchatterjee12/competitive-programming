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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n;
        vector<int> v(n);
        if (n % 2 == 0)
        {
            k = n / 2;
        }
        else if (n % 2 != 0)
        {
            k = (n / 2) + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int x = v[k - 1];
        for (int i = k - 1; i < v.size(); i++)
        {
            if (v[i] == x)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}