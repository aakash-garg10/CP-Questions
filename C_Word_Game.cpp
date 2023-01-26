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
    int N;
    cin >> N;
    vector<string> A(N),B(N),C(N);
    vector<string> test;
    unordered_map<string,int> mp;
    for (int i = 0; i < N; i++) cin >> A[i],test.pb(A[i]);
    for (int i = 0; i < N; i++) cin >> B[i],test.pb(B[i]);
    for (int i = 0; i < N; i++) cin >> C[i],test.pb(C[i]);

    for(auto i:test) mp[i]++;
    
    int Ascore=0,Bscore=0,Cscore=0;

    for (int i = 0; i < N; i++){
        if(mp[A[i]]==1) Ascore+=3;
        else if(mp[A[i]]==2) Ascore+=1;
    }
    for (int i = 0; i < N; i++){
        if(mp[B[i]]==1) Bscore+=3;
        else if(mp[B[i]]==2) Bscore+=1;
    }
    for (int i = 0; i < N; i++){
        if(mp[C[i]]==1) Cscore+=3;
        else if(mp[C[i]]==2) Cscore+=1;
    }

cout<<Ascore<<" "<<Bscore<<" "<<Cscore<<endl;
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

