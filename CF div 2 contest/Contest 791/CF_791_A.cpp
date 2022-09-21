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

		if(n<4 || n%2==1){
			cout << -1 << endl;
		}
	
		else{
			ll mx ,mn;
		
			if(n % 4 == 2){
				mx = 1 + (n-6)/4;
				
			}
			else{
				mx = n/4 ;
			}

			if(n % 6 == 2){
				mn = 2 + (n-8)/6;
				
			}
			else if(n % 6 == 4){
				mn = 1 + (n-4)/6;
			}
			else{
				mn = n/6 ;
			}

			cout << mn << " " << mx << endl;
		}
	}
	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/