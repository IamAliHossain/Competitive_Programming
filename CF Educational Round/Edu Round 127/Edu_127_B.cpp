#include<bits/stdc++.h>
using namespace std;


#define ll 			long long int 
#define FAST 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl 		"\n"
#define yes 		cout << "YES\n"
#define no 			cout << "NO\n"
#define vin 		vector<ll>
#define vst 		vector<string>
#define pb			push_back



int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){

		ll n;
		cin >> n;

		vin v(n+1);

		for(int i=0; i<n; i++){
			
			cin >> v[i];

		}
		

		// if(n==1)yes;
		
		// else if(n==2){
		// 	if(v[n-1]-v[0]<=3)yes;
		// 	else no;
		// }
		// else if(n==3){
		// 	ll fal=0;
		// 	for(int i=0; i<n-1;i++){
		// 		if(abs(v[i]-v[i+1]) >3){ 
		// 			fal=1;
		// 			break;
		// 		}

		// 	}
		// 	if(fal)no;
		// 	else yes;
		// }

		// else{ 

		// 	ll temp = 0;
			ll gap=0;
			ll dgap=0;

			for(int i=1; i<n; i++){
				
				gap+=abs(v[i]-v[i-1]-1);

			}
			//cout << gap ;
			if(gap<3)yes;
			else no;

	}	
	return 0 ;
}
