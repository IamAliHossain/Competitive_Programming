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
		vin v(n+2, 0), a;

		set < ll > st;
		for(int i=1; i<=n; i++){
			cin >> v[i];
			st.insert( v[i] );
		}

		bool ok = false ;
		
		if( st.size() == 1 and st.find(0) != st.end() ) cout << 0 << endl;
		else if( st.size() == 1 and st.find(0)==st.end() ) cout << 1 << endl;
		else{

			ll cnt = 0;
			for(int i=0; i<n+1; i++){
				if(v[i] == 0 and v[i+1] > 0 ){
					cnt ++;
				}
			}

			ll ans = min(cnt, 2ll) ;
			cout << ans << endl;
		}
	}

	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/