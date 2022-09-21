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
		
		
		ll x ; cin >> x ;

		vin v(3);
		for(int i=0; i<3; i++){
			cin >> v[i];
			
		}
		int ok = 0 ;
		for(int i=0; i<3; i++){
			
			ll sc = v[x-1];
			if(sc ==0 || v[sc-1]==0){
				ok = 1;
				break;
			}

		}
		if(ok) no;
		else yes;
	
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/