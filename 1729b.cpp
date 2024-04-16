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
#include <string>
#include <stdlib.h>
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
        string enoded_text;
        string ans;

        cin >> n >> enoded_text;

        for (int i = n - 1; i != 0; i--)
        {
            char c;
            int num;
            if (enoded_text[i] == '0')
            {
                num = stoi(enoded_text[i - 1] + enoded_text[i - 2]);
            }
            {
                num = stoi(enoded_text[i]);
            }
            cout << num << endl;
            ans += c;
        }
        cout << ans << endl;
    }

    return 0;
}