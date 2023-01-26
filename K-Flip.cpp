#include <bits/stdc++.h>
using namespace std;
#define int long long
#define dbg(x) cout << #x << "=" << x << endl;
#define fr(i, k, n) for (int i = k; k < n ? i < n : i >= 0; k < n ? i += 1 : i -= 1)
#define yes(flag) cout << (flag ? "YES" : "NO") << endl;
#define pb push_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
const int MOD = 1000000007;
template <class T>
using pq = priority_queue<T>;
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;

void solve()
{
    int a[200001], t, n, k;
    char s[100001];
    // vector<char> s[100001];
    cin >> n >> k;
    t = 0;
    for (int i = 1; i <= n; ++i)
        cin >> s[i];
    for (int i = 0; i <= 2 * n; ++i)
        a[i] = 0;
    for (int i = 1; i <= n - k + 1; ++i)
    {
        if ((s[i] + t) % 2 == 1)
        {
            t++;
            a[i + k - 1] = 1;
        }
        t -= a[i];
        s[i] = 48;
    }
    for (int i = n - k + 2; i <= n; ++i)
    {
        s[i] = 48 + (s[i] + t) % 2;
        t -= a[i];
    }
    for (int i = 1; i <= n; ++i)
        cout<<s[i];
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
