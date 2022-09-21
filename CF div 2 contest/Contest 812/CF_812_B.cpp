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
		
		vin v(n);
		set < ll > st;
		ll mx = 0;
		int ind ;
		for(int i=0; i<n; i++){
			cin >> v[i];
			// mx = max( mx, v[i]);
			// ind = i ;
		}
		//cout << ind << endl;
		bool ok = true ;
		for(int i=0 ; i<n-1; i++){
			if( v[i] > v[i+1] ){
				for(int j=i+1; j<n-1; j++){
					if(v[j]< v[j+1]){
						ok = false;
						break;
					}
				}
				break;
			}
		}
		
		if( ok ) yes;
		else no;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/