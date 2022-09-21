#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Do_Fast() 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()

void Bismillah(){
	
	Do_Fast();
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, m;
		cin >> n ;
		vin v(n), sv, a, b ;
		set < ll > st;
		map < ll, ll > index;
		for(ll i=0; i<n; i++){
			cin >> v[i];
			index[v[i]] = i;
		}

		ll last = -1;
		ll cur = -1;
		for(int i=0; i<n-1; i++){
			
			cur = max(cur, index[v[i]]);
			
			if(v[i] > v[i+1]){
				last = cur;
				//cout << last << endl;
			}


		}
		for(int i=0; i<=last; i++){
			st.insert(v[i]);
		}
		
		cout << st.size() << endl;
		
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/