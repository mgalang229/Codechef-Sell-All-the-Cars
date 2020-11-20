#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<ll> v(n);
		for(int i=0; i<n; ++i)
			cin >> v[i];
		sort(v.begin(), v.end(), greater<ll>());
		ll ans=0, mod=1e9+7;
		for(int i=0; i<n; ++i) {
			ans+=max((ll)0, v[i]-i);
			ans%=mod;
		}
		cout << ans << "\n";
	}
}
