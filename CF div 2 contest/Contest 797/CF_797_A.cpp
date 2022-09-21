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
		
		ll n, am, bm,diff,ok,fal;
		cin >> n ;
		vin a(n), b(n),ac,bc;

		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];

		if(n==1){
			if(a[0] < b[0])no;
			else yes;
		}
		else{

			ok = 0 ;
			ll diff = 0;
			for(int i=0; i<n; i++){
				diff = max(diff, (a[i]-b[i]));
				if(a[i]<b[i])ok++;
			}
			//cout << diff << endl;
			fal = 0 ;
			for(int i=0; i<n; i++){
				if(b[i]!=0 and (diff != (a[i]-b[i]))){
					fal = 1;
					break;
				}
				
			}

			if(fal || ok)no;
			else yes;
		}
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/