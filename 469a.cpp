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
    int l;
    cin >> l;
    int p, q;
    set<int> array;

    cin >> p;
    while (p--)
    {
        int temp;

        cin >> temp;
        array.insert(temp);
    }

    cin >> q;
    while (q--)
    {
        int temp;
        cin >> temp;
        array.insert(temp);
    }

    if (array.size() == l)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}