#include "bits/stdc++.h"
using namespace std;


#define ll  		long long int 
#define endl		"\n"
#define yes 		cout << "YES\n"
#define no  		cout << "NO\n"
#define vin 		vector<ll>
#define pb  		push_back

#define Bismillah() 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)



int main()
{
	Bismillah();
	
	test_case(){
		
		ll n, k;
		cin >> n;

		if( n & 1) n++; // checking n odd or even using AND opp.
		
		ll val = max(6ll, n);
		
		ll ans = ( val * 5 ) / 2 ;  // each slice taking 2.5 min here
		
		cout << ans << endl;


		

	}	
	return 0 ;
}

// check negative value then mx = -1e9
// check ll and int 