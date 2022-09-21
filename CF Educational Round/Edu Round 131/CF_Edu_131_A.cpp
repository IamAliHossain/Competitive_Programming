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
		
		
		int a[2][2];
		int cnt = 0;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				cin >> a[i][j];
				if(a[i][j] == 1){
					cnt ++;
				}
			}
		}
		long long ans;
		if(cnt == 0 ) {
			ans = 0;
		}
		else if(cnt == 4 ) {
			ans = 2;
		}
		else{
			ans  = 1;
		}
		cout<< ans << endl;
		// if(a[0][0] ==0 && a[1][0] ==0 &&
		// 	a[0][1] ==0 && a[1][1] ==0 &&)
		// cout << n << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/