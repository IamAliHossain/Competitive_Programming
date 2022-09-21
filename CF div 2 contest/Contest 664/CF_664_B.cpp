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



int main()
{
	Bismillah();
	
	//test_case(){
		
		int n, m, x, y;
		cin >> n >> m >> x >> y;

		cout << x <<" "<<  y << endl;
		cout << 1 <<" "<<  y << endl;
		
		for(int i=1; i<=n; i++){

			if(i % 2){ 
				for(int j=1; j<=m; j++){
					if( (i==x and j==y) || (i==1 and j==y) )
						continue;
						cout<< i <<" "<< j << endl;
				}
			}

			else if(i % 2 == 0){
				for(int j=m; j>=1; j--){
					if( (i==x and j==y) || (i==1 and j==y) )
						continue;
						cout<< i <<" "<< j << endl;
				}
			}
		}
		

	//}	
	return 0 ;
}