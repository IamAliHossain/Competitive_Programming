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
		for(int i=0; i<n; i++) cin >> v[i];

		ll cnt =0, tempCount = v[0] ;
		
		for(int i=1; i<n; i++){
			
			int tempVal = v[i] - v[i-1];
			cnt += abs(tempVal);
			
			if(tempVal < 0 ){
				tempCount += tempVal;
			}
			//cout << cnt  << endl;

		}
		cout << cnt + abs(tempCount) << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/