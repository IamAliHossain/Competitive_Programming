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
		
		int n, k;
		string s;
		cin >> s;
		ll sum = 0;
		for(int i=0; i<s.size()/2; i++){
			sum += (s[i]-'0');
		}
		//cout << sum << endl;
		ll ans = 0;
		for(int i=s.size()/2; i<6; i++){
			ans += (s[i]-'0');
		}
		//cout << ans << endl;
		if(ans == sum)yes;
		else no;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/