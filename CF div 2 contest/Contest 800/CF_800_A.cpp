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
		cin >> n >> k;
		if(n==k){
			for(int i=0; i<n; i++){
				cout <<10;
			}
			cout << endl;
		}
		else if(n < k){
			// int diff = k-n ;
			for(int i=0; i<n;i++){
				cout <<10;
			}
			for(int i=0; i<k-n; i++){
				cout <<1;
			}
			cout << endl;

		}
		else if(n > k){
			for(int i=0; i<n-k;i++){
				cout <<0;
			}
			for(int i=0; i<k; i++){
				cout <<10;
			}
			
			cout << endl;
		}
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;


/*

if(n <= diff){
				for(int i=0; i<n; i++){
					cout << 0 ;
				}
				for(int i=0; i<k; i++){
					cout << 1 ;
				}
				cout << endl;
			}
			else{
				for(int i=0; i<n; i++){
					cout <<10;
				}
				for(int i=n; i<k; i++){
					cout <<1;
				}
				cout << endl;
			}

*/