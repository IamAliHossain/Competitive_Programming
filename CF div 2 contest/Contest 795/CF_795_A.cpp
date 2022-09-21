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
#define ali()       	int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, k;
		cin >> n ;
		vin v(n+1);
		for(int i=0; i<n; i++) cin >> v[i];

		ll od =0 , ev =0;

		for(int i=0; i<n; i++){
			if(v[i]&1)od++;
			else ev++;
		}
		if(od>ev)cout << ev << endl;
		else if(ev>od)cout << od << endl;
		else cout << ev << endl;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/