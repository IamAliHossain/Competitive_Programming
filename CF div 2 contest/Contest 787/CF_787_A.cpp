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
		
		ll a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		if(a >= x and b >= y)yes;
		
		else{
			
			if(a < x and b < y){
				ll res = x-a;
				ll ans = c - res ;
				if(ans + b >= y)yes;
				else no;
			}
			else if(a >= x and b < y){
				
				if(c + b >= y)yes;
				else no;
			}
			else if(a < x and b >= y){
				
				if( a+ c >= x)yes;
				else no;
			}

		}
		

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/