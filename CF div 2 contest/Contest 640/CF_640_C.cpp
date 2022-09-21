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
		cin >> n >> k;
		
		ll ans = k + ( k-1 ) / (n -1 )  ;
		cout << ans << endl ;


	}	
	return 0 ;
}