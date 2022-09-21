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

		ll n, x, y;
		cin >> n >> x >> y;

		string a, b; cin >> a >> b ;
		ll cnt1 = 0, cnt2 = 0 ;
		ll ind1 = 0, ind2 = 0 ;

		vin v;
		for(int i=0; i<n; i++){
			if(a[i] != b[i] ){
				v.push_back(i);
			}
		}
		
		ll ans  ;
		if( v.size() & 1 ){
			ans = -1 ;
		}	
		
		else if( v.empty() ){
			ans = 0 ;
		}
		else if( v.size() == 2 && (v[0] + 1) == v[1] ){
			ans = min(x, 2*y); ;
		}
		else {
			ans = (v.size()/2) * y ;
		}
		cout << ans << endl;

	}
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int
indexing of string always start with i=0;

*/
