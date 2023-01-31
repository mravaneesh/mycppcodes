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
 
 
signed main(){
 
//setIO("problemname");
 
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int n;
	cin>>n;
	
	int a[n];
	
	rep(i,0,n) cin>>a[i];
	
	vi pr(n+1,0);
	
	rep(i,0,n){
	    pr[i+1]=pr[i]+a[i];
	}
	int m1=pr[1];
	int m2=pr[0];
	
	rep(i,1,n+1){
	    m1=max(m1,pr[i]-m2);
 
		m2=min(m2,pr[i]);
	   
	}
 
 
	cout<<m1<<'\n';
	
}
