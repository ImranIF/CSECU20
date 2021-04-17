#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

///--->>> CONTAINERS <<<---///
using i64 = int64_t;
using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vvi = vector<vector< ll > >;
using vpr = vector<pair<ll,ll> >;
using pr = pair<ll,ll>;
using st = set<ll>;
using stk = stack<ll>;
using kiwi = queue<ll>;
using pkiwi = priority_queue<ll>;
using deck = deque<ll>;
using mp = map<ll,ll>;
using ump = unordered_map<ll,ll>;

///--->>> MACROS<<<---///
const ll mx = 3e5+123;
#define MOD 998244353
#define mod 1000000007
#define isb(z) __builtin_popcount(z)
#define lisb(z) __builtin_popcountll(z)
#define iclz(z) __builtin_clz(z)
#define lclz(z) __builtin_clzll(z)
#define ictz(z) __builtin_ctz(z)
#define lctz(z) __builtin_ctzll(z)
#define REP(i,n) for (ll i=1;i<=n;++i)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

///--->>> TEMPLATES <<<---///
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update >;

template<typename T>
T modpow(T a, T b){ll ans = 1; while(b>0) { if(b&1) ans*=a, b--; else a*=a, b>>=1;} return ans; }

///--->>>OPTIMIZE<<<---///
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

///--->>> DEBUGGER<<<---///
#define dbg(args...) do {cerr<<#args<<" : "; diraf(args); } while(0)
void diraf ()  {cerr << endl;}
template < typename T, typename ... hello>
void diraf( T arg, const hello &... rest) {cerr<<arg<< ' ';diraf(rest...);}

///--->>> RANDOMIZER<<<---///
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/* usage - just do rng() */

int main(int argc, char* argv[]){
    fastio;
    cin.exceptions(cin.failbit);
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    ///cout<<fixed<<setprecision(20);
    ll tc; cin>>tc;
    while(tc--){
        ll n; cin>>n;
        vi arr(n);
        
    }

return 0;
}