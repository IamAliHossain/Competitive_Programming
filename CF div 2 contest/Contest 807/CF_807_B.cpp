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
		vin v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		ll zero = 0 ;
		ll tot = 0 ;
		ll index = 0 ;
		
		for(ll i=0; i<n-1; i++){
			if(v[i] > 0 ){
				index = i ;
				break;
			}
		}
		//cout << index << endl;
		for(int i=0; i<n-1; i++){
			tot+= v[i];
			if(v[i]==0) zero++;
		}

		if(tot){
			cout <<  (tot + zero - index) << endl;
		}
		else cout << 0 << endl;
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/