#include <bits/stdc++.h>
using namespace std;
#define int long long
#define dbg(x) cout << #x << "=" << x << endl;
#define fri(i,a,b) for(int i=a;i<b;i++)
#define frd(i,a,b) for(int i=a;i>=b;i--)
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
    int a, b, c;
    cin >> a >> b >> c;
    vi A(3);
    A[0] = a;
    A[1] = b;
    A[2] = c;
    sort(all(A));
    cout << A[1] << endl;
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
