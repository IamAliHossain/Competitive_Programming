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
		
		int n, k;
		string s;
		cin >> s;
		
		if(s[0] < s[1])cout << (s[0] -'a')*25 + s[1] -'a' << endl;
		 
		else{
			cout << (s[0] - 'a' )*25 + s[1] -'a' + 1 << endl;
		}
		

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/