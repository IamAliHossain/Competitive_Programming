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
		
		ll n, k;
		cin >> n ;
		vin v(n), mod;
		set < ll > st;
	
		for(int i=0; i<n; i++) cin >> v[i];
		for(int i=0; i<n; i++){
			
			if(v[i] % 10 == 5){
				st.insert(v[i]+5);
				
			}

			ll j= 8;
			while(j--){
				if(v[i] % 10 == 2){
					st.insert( v[i] % 20 );
					break;
				}
				else{
					v[i] += v[i]%10;
				}
			}

			if( v[i] % 10 == 0){
				st.insert( v[i] );
			}

		}

		if(st.size() == 1) yes;
		else no;

	}
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/