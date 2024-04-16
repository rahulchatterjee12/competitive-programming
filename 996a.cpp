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
#include <sstream>
#include <string>
#include <regex>
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

    int money;
    cin >> money;
    int billCount = 0;

    int bills[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        if (money >= bills[i])
        {
            int tempBill = money / bills[i];
            billCount += tempBill;
            money = money - tempBill * bills[i];
        }
    }

    cout << billCount << endl;

    return 0;
}