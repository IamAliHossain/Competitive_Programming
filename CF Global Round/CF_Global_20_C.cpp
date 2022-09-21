#include<bits/stdc++.h>
using namespace std;


#define ll			long long int 
#define FAST		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl		"\n"
#define yes			cout << "YES\n"
#define no 			cout << "NO\n"
#define vin 		vector<ll>
#define vst 		vector<string>
#define pb			emplace_back



int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){
		ll n;

		cin >> n;
		vin v(n);

		for(int i=0; i<n; i++) cin>> v[i];

		ll cnt = 0;

		int left = n;
		int right = -1;


		for(int i=0; i<n-1; i++){
			
			if(v[i] == v[i+1]){
				
				left  = min(i, left);
				right = max(i, right);
			}
		
		}

		
		if(left >= right ){
			cout << 0 << endl;
		}
		else cout << max(right - left - 1, 1)  << endl;

	}	
	return 0 ;
}
