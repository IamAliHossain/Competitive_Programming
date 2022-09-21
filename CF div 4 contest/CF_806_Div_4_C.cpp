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
		for(int i=0;  i<n; i++){
			int x;
			cin >> x ;
			string s;
			cin >> s ;
			for(int j=0; j<x; j++){
				if(s[j] == 'D'){
					v[i] += 1;
				}
				if(s[j] == 'U'){
					if(v[i] == 0){

						v[i] = 9;
					}
					else v[i] -= 1 ;
					
				}
			}
		}
		for(int i=0; i<n; i++){
			if(v[i] >= 10){
				cout << (v[i]%10) << ' ';
			}
			else cout << v[i] << ' ';
			
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