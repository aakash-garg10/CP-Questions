#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define dbg(x) cout << #x << "=" << x << endl;
#define fr(i, k, n) for (int i = k; k < n ? i < n : i >= 0; k < n ? i += 1 : i -= 1)
#define yes(flag) cout << (flag ? "YES" : "NO") << endl;
#define pb push_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define deb1(a)                                    \
    cerr << #a << " = [ ";                         \
    for (auto it = a.begin(); it != a.end(); it++) \
        cerr << *it << " ";                        \
    cerr << "]\n";
const int MOD = 1000000007;

void solve()
{
    int N;
    cin >> N;
    vector<int> A(N);
    fr(i, 0, N)
    {
        cin >> A[i];
    }
    vector<int> temp = A;
    sort(all(temp));
    deb1(temp);
    int first = temp[N - 1];
    int second = temp[N - 2];
    fr(i, 0, N)
    {
        if (A[i] == first)
            A[i] = A[i] - second;
        else if (A[i] == second)
            A[i] = A[i] - first;
        else
            A[i] = A[i] - first;
    }
    fr(i, 0, N) cout << A[i] << " ";
    cout << endl;
    return;
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
