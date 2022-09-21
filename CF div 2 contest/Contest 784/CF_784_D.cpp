#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Bismillah() 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()     		int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		int n, k;
		cin >> n ;
		
		string s;
		cin >> s ;

		ll r = 0, b = 0, w= 0, temp = 0 ;
		
		for(int i=0; i<n; i++){
			
			if( s[i] == 'R' )r++;
			if( s[i] == 'B' )b++;

			if( s[i] == 'W' ){
				
				if( ( r >0 || b > 0) and (r == 0 || b == 0))
					temp = 1;
					r = 0;
					b = 0;
					continue;
				
			}

			if( s[i] == 'R' )r++;
			if( s[i] == 'B' )b++;

		}
		if(( r >0 || b > 0) and (r == 0 || b == 0))temp = 1;

		if(temp)no;
		else yes;
		
	}	
	return 0 ;
}


/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/