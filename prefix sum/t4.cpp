#include<bits/stdc++.h>
using namespace std;
#include<cstring>
#include<cstdio>
#include<vector>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<class T> using indexed_set = tree<T, null_type, less<T>, 
            rb_tree_tag, tree_order_statistics_node_update>;


#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long
#define pf push_front
#define pb push_back
#define ppf pop_front()
#define ppb pop_back()
#define in insert
#define mp make_pair
#define f first
#define sd second
#define all(x) x.begin(), x.end()
#define mx(x) *max_element(all(x))
#define mn(x) *min_element(all(x))
#define cy cout<<"YES"<<'\n';
#define cn cout<<"NO"<<'\n';

#define PI 3.1415926535897932384626 

typedef pair<int, int>	pii;
typedef vector<int>	vi;
typedef vector<string>	vs;
typedef vector<pii>	vpii;
typedef vector<vi>	vvi;


//segment tree setup for maximum range
// void build(int ind,int low,int high,vector<int> &a,vi &seg){
//     if(low==high){
//         seg[ind]=a[low];
//         return;
//     }
    
//     int mid=(low+high)/2;
//     build(2*ind+1,low,mid,a,seg);
//     build(2*ind+2,mid+1,high,a,seg);
//     seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
// }

// ///

// int query(int ind,int low,int high,int l,int r,vi &seg){
    
//     if(low>=l && high<=r){
//         return seg[ind];
//     }
    
//     if(high<l || low>r) return INT_MIN;
    
//     int mid=(low+high)/2;
//     int left=query(2*ind+1,low,mid,l,r,seg);
//     int right=query(2*ind+2,mid+1,high,l,r,seg);
    
//     return max(left,right);
// }

///


// 48-57 -> 0-9
// 65-90 -> A-Z
// 97-122 -> a-z

// void setIO(string s) {
// 	freopen((s + ".in").c_str(), "r", stdin);
// 	freopen((s + ".out").c_str(), "w", stdout);
// }

const int N=1e5+1;

void solve(){
    int ans=0;
      
     int x,y;
     cin>>x>>y;
     rep(i,x,y+1){
         int r=i%10;
         if(r==2 || r==3 || r==9){
             ans++;
         }
        
     }
    
     
     cout<<ans<<'\n';
}

signed main(){

//setIO("problemname");

    ios::sync_with_stdio(false);
	cin.tie(nullptr);
        int t;
        cin>>t;
        while(t--){
        solve();
       }
	
}
