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
	
	test_case(){
		
		ll n, k, sum ;
		//cin >> n;
		string s;
		cin >> s;
		ll ln = s.size();
		
		if(ln == 1) cout << "Bob " << (s[ln-1] - 'a') + 1 << endl;
		else if(ln > 1){ 

			if(ln % 2 == 0){
				sum = 0;
				cout << "Alice ";
				for(int i=0; i<ln; i++){
					sum += s[i] - 'a' + 1;
				}
				cout << sum << endl;
			}
			
			else{
				if(s[0] >= s[ln-1]){
					sum = 0 ;
					for(int i=0; i<ln-1; i++){
						sum += s[i] - 'a' + 1;
					}
					//cout << sum << endl;
					cout << "Alice " << sum - ((s[ln-1] - 'a') + 1) << endl;
				}
				else if(s[0] < s[ln-1]){
					sum = 0 ;
					for(int i=1; i<ln; i++){
						sum += s[i] - 'a' + 1;
					}
					//cout << sum << endl;
					cout << "Alice " << sum - ((s[0] - 'a') + 1) << endl;
				}
			}

		}


		

	}	
	return 0 ;
}

// check negative value then mx = -1e9
// check ll and int 