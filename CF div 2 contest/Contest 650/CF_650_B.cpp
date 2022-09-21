#include "bits/stdc++.h"
using namespace std;


#define ll  		long long int 
#define FAST		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl		"\n"
#define yes 		cout << "YES\n"
#define no  		cout << "NO\n"
#define vin 		vector<ll>
#define vst 		vector<string>
#define pb  		emplace_back



int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){

		int n;
		cin >> n;
		vin v(n);
		for(int i=0; i<n; i++)cin >> v[i];

		ll cnt = 0;
		ll cur = 0;

		for(int i=0; i<n; i++){
			
			if(i % 2 == 0 and v[i] %2 !=0){
				cnt++;
			}
			if(i % 2 != 0 and v[i] %2 ==0){
				cur++;
			}

		}

		if(cnt != cur) cout << -1 << endl;
		
		else cout << cur << endl;

	}	
	return 0 ;
}
