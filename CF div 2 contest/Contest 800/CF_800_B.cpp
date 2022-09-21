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

int b[100010];

ali()
{
	Bismillah();
	
	test_case(){
		
		int n, k;
		cin >> n ;
		string s;
		cin >> s;

		ll one=0;
		for(int i=0; i<n; i++){
			if(s[i]=='1')one++;
		}
		if(n == one)cout << n << endl;
		else{
			ll ans = 0, conse = 0;
			for(int i=1; i<n; i++){
				if(s[i]!=s[i-1]){
					ans+=i;
				}
			}
			cout << ans+n << endl;
			
		}
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/