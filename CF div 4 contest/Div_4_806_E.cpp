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
		ll a[n+1][n+1];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				char c ;
				cin >> c;
				a[i][j] = (c - '0');
			}
		}
		
		ll ans = 0 ;
		
		for(int i=0; i<n; i++){
			
			for(int j=0; j<n; j++){
				ll one = 0, zero = 0;
				if(a[i][j]) one++;
				else zero++;

				if(a[j][n-i-1]) one++;
				else zero++;

				if(a[n-i-1][n-j-1]) one++;
				else zero++;

				if(a[n-j-1][i]) one++;
				else zero++;

				ans += min( one, zero);
			}
		}
		cout << ans/4 << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/