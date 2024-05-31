#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fri(i,a,b) for(int i=a;i<b;i++)
#define frd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pp pop_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"
 
 
 
void solve(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        vi arr(n);
        vi temp;
        int evencnt=0,oddcnt=0;
        fri(i,0,n){
            cin>>arr[i];
            if(arr[i]%2!=0){
                oddcnt++;
            }
            else {
                evencnt++;
                temp.pb(arr[i]);
                }
            }

        if(evencnt==0) {
            cout<<"0"<<endl;
        }
        else{
           auto minval=*min_element (all(temp));
           int step=0;
           while(minval%2==0){
               
               minval/=2;
               step++;
           }
           cout<<step+temp.size()-1<<endl;
        }
    }
}
     

 
int main(){
	fast;
	solve();
	return 0;
	
	
}
