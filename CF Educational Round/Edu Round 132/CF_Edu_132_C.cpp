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
#define ali()       	int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		string s, t;
		cin >> s ;
		t = s ;
		stack < char > st;
		ll qus = 0, opn = 0, close = 0;
		for(auto u : s){
			if( u == '?' ){
				qus++;
			}
			if( u == '('){
				opn++;
			}
			if( u == ')'){
				close++;
			}
		}

		ll half = s.size()/2;
		ll cnt = 0 , last_opn = -1 ;
		ll l = opn , r = close ;
		bool ok = false ;

		
		for(ll i=0; i<s.size(); i++){
			
			if( s[i] == '?' ){
				if( opn < half) {
					s[i] = '(';
					opn++;
					last_opn =  i ;
				}
				
				else if( close < half) {
					s[i] = ')';
					close++;
				}
				
			}
			if( s[i] == '(') cnt ++; //cout << cnt << 1 << endl;
			else cnt--; // cout << cnt << 2 << endl;
			
		}
		
		for(ll i=0; i<t.size(); i++){
			if( t[i] == '?' ){
				if(l < half and last_opn != i){
					t[i] = '(';
					l++;
				}
				else if(r < half){
					t[i] = ')';
					r++;
				}
				else ok = true;

			}
			if( t[i] == '(') cnt++;
			else cnt --;
			if(cnt < 0) ok = true;
			//cout << cnt << endl;
		}
		//cout << cnt << " " << 1 << endl;
		//if(qus == 2) ok = true;
		if( cnt || last_opn == -1 ) ok = true;
		
		
		if ( ok )yes;
		else no ;
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/