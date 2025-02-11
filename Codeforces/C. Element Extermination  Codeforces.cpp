#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int 					long long int
#define ld 					long double
#define mod 				1e9+7
#define ps(x,y)   			fixed<<setprecision(y)<<x
#define min_priority_queue  priority_queue<int,vector<int>,greater<int>>
#define endl        		"\n"
//Use endl wisely buffer flush
#define ordered_set tree<int, null_type , less<int> , rb_tree_tag , tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fun() {
	int n;
	cin >> n;
	vector<int>a(n);
	for (auto& i : a) {
		cin >> i;
	}
	if (n < 2) {
		cout << "YES" << endl;
		return;
	}
	if (n == 2) {
		if (a[0] < a[1]) {
			cout << "YES" << endl;
			return;
		}
		else {
			cout << "NO" << endl;
			return;
		}

	}
	if (a[0] < a[n - 1]) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
	return;
}

int32_t main() {
	fastio;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		fun();

	}
	return 0;
}
