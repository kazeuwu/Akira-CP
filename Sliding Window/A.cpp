/**
 *    author:  akira
 *    created: 21/06/2023 21:23:53
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/** --------PROBLEM SOLVING-------- **/
void solve() {
	int n, k; cin >> n >> k;
	int a[1001];
	ll sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < k; i++) {
		sum += a[i];
	}
	ll res = sum, idx = 0;
	for(int i = k; i < n; i++) {
		sum = sum - a[i - k] + a[i];
		if(sum > res) {
			res = sum;
			idx = i - k + 1;
		}
	}
	cout << res << endl;
	for(int i = 0; i < k; i++) {
		cout << a[idx + i] << " ";
	}
	cout << endl;
}

/** ------------NOTES-------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
	//freopen(".INP", "r", stdin);
	//freopen(".OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		solve();	
	}
	return 0;
}