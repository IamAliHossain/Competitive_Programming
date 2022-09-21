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
		
		ll n, ans, res;
		cin >> n ;
		ans = n/2;
		res = n/3;
		ll a,b, c;
		
		if(n%3==0){

			a = res;
		 	b = res+1;
		 	c = res-1;
		}
		else if(n%3==1){
			
		 	a = res;
		 	b = res+2;
		 	c = res-1;
		}
		else if(n%3==2){
			
		 	a = res+1;
		 	b = res+2;
		 	c = res-1;
		}
		
		cout << a <<" "<< b <<" "<<c << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/