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
		vin v(n);
		ll mx = 0, mn = 1e9;
		for(int i=0; i<n; i++){
			cin >> v[i];
			mx = max(v[i], mx);
			mn = min( mn, v[i]);
		}
		ll mx_diff = 0;
		for(int i=1;i<n;i++){
	        mx_diff = max(mx_diff, v[i-1]-v[i] );
	    }

		mx_diff = max( mx_diff, v[n-1]- v[0]);
		
		ll x = max( mx_diff, mx - v[0]);
		ll result = max( x, v[n-1] - mn );
		
		cout << result << endl;
		
		
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/