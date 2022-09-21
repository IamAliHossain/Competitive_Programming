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
		cin >> n >> m;
		string s,t ;
		cin >> s >> t ;
		vin a, b;
		queue < ll > qa, qb, nq;
		
		for(int i=0; i<n; i++){
			a.pb(s[i]-'0');
			
		}
		for(int i=0; i<m; i++){
			b.pb(t[i]-'0');
		}
		
		int i= 0;
		while(a.size()!=m){
			if(a[i] == b[i]){
				
				a.erase(a.begin()+1);
			}
			else{
			
					a.erase(a.begin());
				
			}
		}
		if(a == b) yes;
		else no;

		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/