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
#define ali()     		int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		
		string s, t;
		cin >> s >> t ;
		
		ll lns =s.size();
		ll a = 0, b=0;
		ll ans = 1;
		for(int i=2; i<=lns; i++){
			ans*=i;
		}
		//cout << ans << endl;
		for(int i=0; i< t.size(); i++){
			if(t[i] == 'a')a++;
			else b++;
		}

		if( a>0 and t.size()>1)cout << -1 << endl;
		else if(a==1 and t.size()==1)cout << 1 << endl;
		else if(a==0){
			ll res = pow(2ll, s.size());
			cout << res << endl;
		}
		

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/