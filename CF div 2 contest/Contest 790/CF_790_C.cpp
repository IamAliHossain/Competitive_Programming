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
		
		int n, m;
		cin >> n >> m ;
		string s,s1,s2;
		vector < string > vs;
		vin v;

		ll sum ;

		for(int i=0 ; i<n; i++){
			cin >> s;
			vs.pb(s);
		}
		ll mn =  1e9+10;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				s1 = vs[i];
				s2 = vs[j];
				sum = 0;
				
				for(int k=0; k<m; k++){
					sum  += (abs(s1[k] - s2[k]));
				}

				mn = min(sum, mn);
			}
		}
		for(auto u: vs)cout << u <<' ';
			cout << endl;
		cout << mn << endl;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/