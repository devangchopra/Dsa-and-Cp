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
	string row_nu_1, row_nu_2;
	cin >> row_nu_1 >> row_nu_2;
	bool are_all_zero = true;

	for (auto& i : row_nu_1) {
		if (i != '0') {
			are_all_zero = false;
		}
	}

	for (auto& i : row_nu_2) {
		if (i != '0') {
			are_all_zero = false;
		}
	}

	if (are_all_zero) {
		cout << "YES" << endl;
		return;
	}
	bool cant_go = false;
	for (int i = 0; i < n; i++) {
		if (row_nu_1[i] == '1' and row_nu_2[i] == '1') {
			cant_go = true;
			break;
		}
	}
	if (cant_go) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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
