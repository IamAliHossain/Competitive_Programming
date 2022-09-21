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
		
		ll n, a, b;
		cin >> n >> a >> b;
		vin v1, v2;
		ll div = n/2 ;
		
		if( (a <= div && b >= div+1) || ( a == div+1 && b == div)){
			cout << a <<" ";
			for(int i=n; i>=1; i--)
				if(i!=a and i!=b)
					cout << i << " ";
				cout << b << endl;
	
		
		}
		else cout << -1 << endl;
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/