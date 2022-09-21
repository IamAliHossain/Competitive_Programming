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
		vin v(n);
		for(int i=0; i<n; i++)cin >> v[i];
	
		
		ll mn = 1e9;
		ll od=0;
		for(int i=0; i<v.size(); i++){
			if(v[i]&1)od++;
			
			else{
				ll cnt =0;
				ll temp = v[i];
				while((temp%2)==0){
					cnt ++; 
					temp/=2;
				}
				mn = min(cnt,mn);
			}
		}
		if(od)cout << n-od << endl;
		else cout << n  + mn - 1<< endl;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/