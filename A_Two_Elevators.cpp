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
    int a,b,c;
    cin>>a>>b>>c;
    int bdist=abs(c-b)+(c-1);
    int adist=a-1;
    if(adist==bdist)cout<<3<<endl;
    else if (adist>bdist) cout<<2<<endl;
    else cout<<1<<endl;
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

