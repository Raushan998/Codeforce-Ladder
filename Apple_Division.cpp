// I love my code ❤️
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vv(x) vector<x>
#define vv1 vector<vector<ll>>
#define rep(i, s, n) for (i = s; i < n; i++)
#define mm(x, y) map<x, y>
#define pp(x,y) pair<x,y>
#define in(x) cin >> x
#define in1(x, y) cin >> x >> y
#define in2(x, y, z) cin >> x >> y >> z
#define in3(x, y, w, z) cin >> x >> y >> w >> z
#define ou(x) cout << x << " "
#define ou1(x, y) cout << x << " " << y
#define ou2(x, y, z) cout << x << " " << y << " " << z
#define ss set<ll>
#define vv2 vector<pair<ll, ll>>
#define mm1 map<ll, vector<ll>>
#define dw cout << endl
#define w()   int t;cin >> t; while (t--)
#define it(x, m) for (auto x : m)
#define pb(v, x) v.push_back(x)
ll n,i,j,k,p,q,mod=1e9+7;
using namespace std;
ll min_val=1e9;
void recurse(vv(ll)&v,int index,ll sum,ll current_sum){
    if(index>=v.size()){
        min_val=min(abs(current_sum-sum),min_val);
        return;
    }
    min_val=min(min_val,abs(sum-current_sum));
    recurse(v,index+1,sum-v[index],current_sum+v[index]);
    recurse(v,index+1,sum,current_sum);
}
void solve(vv(ll) v,ll sum){
    recurse(v,0,sum,0);
    cout<<min_val<<endl;
}
void input(){
    cin>>n;
    p=0;
    vv(ll) v(n,0);
    rep(i,0,n){
        cin>>v[i];
        p+=v[i];
    }
    solve(v,p);
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}