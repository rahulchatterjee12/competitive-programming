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
        string time;
        cin >> time;

        int h = stoi(time.substr(0, 2));
        string m = time.substr(3, 5);
        string mtime = "AM";

        if (h >= 12)
        {
            if (h > 12)
            {
                h = h - 12;
            }
            mtime = "PM";
        }

        if (h == 0)
        {
            h = 12;
        }
        if (h >= 10)
        {
            cout << h << ":" << m << " " << mtime << endl;
        }
        else
        {
            cout << '0' << h << ":" << m << " " << mtime << endl;
        }
    }
    return 0;
}