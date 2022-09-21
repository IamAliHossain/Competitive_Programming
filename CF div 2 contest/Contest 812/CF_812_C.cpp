#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Bismillah() 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, m;
		cin >> n ;
		ll a[n];
		// vin a(n, -1);
		
		memset(a, -1, sizeof(a));

		for(int i=n-1; i>=0; i--){
			
			while( a[i] == -1 ) {
				
				ll x = i ;
				ll sq = sqrt( x ) ;
				if( sq*sq != x ) sq++;
				
				sq *=  sq;

				ll check = sq - i ;
				
				while( a[i] == -1 and i>= check){
					ll k = sq - i ;
					a[i] = k ;
					a[k] = i ;
					i--;
				}
				
			}
		}
		for(auto u : a){
			cout << u << " ";
		}
		cout << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/