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
		pair< ll, ll> p;
		vin a(n), b(n);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];

		ll duration = 0 ;
		cout << b[0] - a[0] << " ";
		for(int i=1; i<n; i++){
			if(a[i] >= b[i-1]){
				duration = b[i] -a[i];
				cout << duration <<" ";
			}
			else if(a[i] < b[i-1]){
				duration = b[i] -b[i-1];
				cout << duration <<" ";
			}
		}
		cout << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/