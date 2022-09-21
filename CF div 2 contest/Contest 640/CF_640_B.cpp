#include "bits/stdc++.h"
using namespace std;


#define ll  		long long int 
#define endl		"\n"
#define yes 		cout << "YES\n"
#define no  		cout << "NO\n"
#define vin 		vector<ll>
#define vst 		vector<string>
#define pb  		emplace_back

#define Bismillah()		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() int t; cin >> t; while(t--)


int main()
{
	Bismillah();
	
	test_case(){
		
		int n, k;
		cin >> n >> k;
				
		ll ans = n - (k - 1) ;
		ll res = n- ((k-1) << 1);
		
		//cout << res;
		
		if(ans > 0 and ans % 2 == 1 ){
			yes;
			for(int i=1; i<k ; i++){
				cout << 1 << " ";
			}
			cout << ans << endl;
		}
		else if(res > 0 and res % 2 == 0 ){
			yes;
			for(int i=1; i<k ; i++){
				cout << 2 << " ";
			}
			cout << res << endl;
		}
		else no;

	}	
	return 0 ;
}

// long long and int 
//Take it easy Ali Hossain