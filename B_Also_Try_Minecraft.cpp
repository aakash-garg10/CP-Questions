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
    int N, q;
    cin >> N >> q;
    vector<int> A(N), pref(N), suf(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (i == 0)
            pref[i] = 0;
        else
        {
            if (A[i] < A[i - 1])
                pref[i] = (A[i - 1] - A[i]) + pref[i - 1];
            else
                pref[i] = pref[i - 1];
        }
    }
    // for(auto i:pref)cout<<i<<" ";cout<<endl;
   
      for(int i=N-2;i>=0;i--){
        int diff= A[i+1]-A[i] > 0 ? A[i+1]-A[i] : 0;
        suf[i]=suf[i+1]+ diff;
    }
    // for(auto i:suf)cout<<i<<" ";cout<<endl;

        
       
    while(q--){
        int l,r,ans=0;
        cin >> l >> r;
        
          if(l<r){
            cout<<abs(pref[l-1]-pref[r-1])<<endl;
        }
        else {
            cout<<abs(suf[l-1]-suf[r-1])<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int T = 1;
    solve();

    return 0;
}
