#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back
#define show1(x)		cout << x << endl;
#define show2(x, y)		cout << x << " " << y << endl;
#define Do_Fast() 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()
const int N = 1e6 + 10 ;
void Bismillah(){

	Do_Fast();

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif // ONLINE_JUDGE
}

ali()
{
	Bismillah();

	test_case(){

		ll n, k;
		cin >> n >> k;
		vin v(n+k);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		
		ll sum = 0;
	
		ll m = k;
		for(int i=0; i<n; i++){
			if(v[i] > v[i+k]){
				swap( v[i], v[i+k]);
			}
		}

		reverse(v.begin(), v.end());
		for(int i=0; i<k; i++){
			sum += v[i];
		}
		cout << sum << endl;

	}
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int
indexing of string always start with i=0;

*/
