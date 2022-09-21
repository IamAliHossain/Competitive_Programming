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
		
		string s,t;
		cin >> s;

		vin v(n), vv;

		ll cnt = 0;

		for(int i=0; i<n; i++){
			
			if(s[i]=='9') cnt++;

			v[i] = (9-(s[i]-'0'));
			
		}
		//cout << cnt << endl;
		if(s[0]=='9'){
			int carry =0 ;
			string ans="";

			for(int i=n-1; i>=0; i--){
				
				int temp = s[i] - '0';
				temp += carry;
				
				if(temp > 1){
					ans += '0'+ 11 - temp;
					carry = 1 ;
				}
				else{
					ans += '0' + 1 - temp ;
					carry = 0;
				}
				
				
			}

			reverse(ans.begin(), ans.end());
			cout <<  ans << endl;
		}
		
		else {
			for(int i=0; i<n; i++){
				cout << v[i];
			}
			cout << endl;
		}
		
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/