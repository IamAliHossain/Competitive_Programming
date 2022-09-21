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
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		
		ll cnt = 0;

		if(r % 2)cnt++;
		if(g % 2)cnt++;
		if(b % 2)cnt++;
		if(w % 2)cnt++;

		//cout << cnt;
		if(cnt <= 1){
			yes;
		}
		else{
			
			if(r==0 || g==0 || b==0 )no;
			
			else{
				cnt = 0;
				if(r % 2) cnt++;
				if(g % 2) cnt++;
				if(b % 2) cnt++;
				//cout << cnt << endl;
				if(cnt==3) yes;
				else if(cnt == 2 and w % 2) yes;
				else no;
			}
		}
		



	}	
	return 0 ;
}
