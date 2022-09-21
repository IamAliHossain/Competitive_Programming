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

		ll n, q;
		cin >> n ;
		vin a(n), b(n), dmax(n);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];

		if( a == b){
			for(int i=0; i<2l*n; i++){
				cout << 0 << " ";
				if( (i+1) % n == 0 ) cout << endl;
			}
		}
		else {

			//For min D[i]
			for(int i=0; i<n; i++){
				ll x = a[i];
				auto min_val = lower_bound(b.begin(), b.end(), x);
				cout << (*min_val - a[i]) << " ";
			}
			cout << endl;
			for(int i=n-1, j=n-1; i>=0; i--){
				if(a[i+1] > b[i]){
					j = i ;
				}
				dmax[i] = b[j] - a[i];
				
			}
			for(auto u: dmax) cout << u << " ";
			cout << endl;
			
		}
		
		//show1(n);

	}
	return 0 ;
}



/*

check negative value then mx = -1e9
check ll and int
indexing of string always start with i=0;

*/
