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

		ll n, r, temp, ans;
		cin >> n >> r ;

		//ll ans = 0;
		if(n>r){
			ans = r*(r+1)/2;
		}
		else {
			temp = n-1;
			ans = (temp*( temp + 1)/2) + 1 ; 
		}
		cout << ans << endl;


	}	
	return 0 ;
}
