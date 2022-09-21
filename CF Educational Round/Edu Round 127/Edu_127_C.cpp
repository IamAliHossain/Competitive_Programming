#include<bits/stdc++.h>
using namespace std;


#define ll 		long long int 
#define FAST 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl 	"\n"
#define yes 	cout << "YES\n"
#define no 		cout << "NO\n"
#define vin 	vector<ll>
#define vst 	vector<string>
#define pb		emplace_back



int main()
{
	FAST;
	int t;
	cin >> t;

	while(t--){

		ll n, budget;

		cin >> n >> budget;

		vin v(n);

		for(int i=0; i<n;i++){

			cin >> v[i];

		}
		
		sort(v.begin(), v.end());

		ll sum = 0;
		ll ans = 0;

		for(int i=0; i<n; i++){
			
			sum += v[i];
			
			if(sum <= budget){
				ans +=  (budget-sum) / (i+1) + 1; // here (i+1) showing me how much pack i can take and +1 means we have substract sum that means 1 pack deducted to count that here is +1;
			}
			//else ans =0;

		}
		cout << ans << endl;


	}	

	return 0 ;
}
// Alhamdulillah for everything