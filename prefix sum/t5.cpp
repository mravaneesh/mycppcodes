#include<bits/stdc++.h>
using namespace std;


#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long
#define pb push_back
#define mp make_pair
#define f first
#define sd second
#define all(x) x.begin(), x.end()


#define PI 3.1415926535897932384626 

typedef pair<int, int>	pii;
//typedef pair<ll, ll>	pl;
typedef vector<int>	vi;
typedef vector<string>	vs;
//typedef vector<ll>	vl;
typedef vector<pii>	vpii;
//typedef vector<pl>	vpl;
typedef vector<vi>	vvi;
//typedef vector<vl>	vvl;

// void setIO(string s) {
// 	freopen((s + ".in").c_str(), "r", stdin);
// 	freopen((s + ".out").c_str(), "w", stdout);
// }

void solve(){
int n,q;
cin>>n>>q;

vi pref(n+1);
pref[0]=0;

rep(i,1,n+1){
    int x;
    cin>>x;
   pref[i]=pref[i-1]+x;
}

rep(i,0,q){
    int x,y;
    cin>>x>>y;
    
    cout<<pref[y]-pref[x]<<'\n';
}

}

signed main(){

//setIO("problemname");

    ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
}
