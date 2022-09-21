#include<bits/stdc++.h>
using namespace std;


#define ll 		long long int 
#define FAST 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl 	"\n"
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

		for(int i=1; i<=n; i++)cin >> v[i];

		
		ll temp=0;
		ll od=0;
		ll ev=0; 
	
		ll sum =0;
		for(int i=1; i<=n; i++){
			
			sum += v[i]-1;
		}
		//cout << sum;
		
		
		if(sum %2 == 0){
			cout<< "maomao90" << endl;
		}

		else if(sum %2 == 1){
			 cout<< "errorgorn" << endl;
			}

		}	
	return 0 ;
}
