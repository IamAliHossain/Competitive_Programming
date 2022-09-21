#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n ;
		
		vector< long long > v(n), ans, neg,pos, all ;
		
		for(int i=0; i<n; i++) cin >> v[i];

		
		long long ps =0, ng=0, zero=0;
		for(int i=0; i<n; i++){
			
			if(v[i] < 0){
				neg.push_back(v[i]);
			} 
			else if(v[i] > 0){
				
				pos.push_back(v[i]);
			} 
			else {
				if(ans.size()<2){
					ans.push_back(v[i]);
				}
				
			}

		}
		if(neg.size() > 2 || pos.size() >2) cout << "NO\n";
		
		else{
			
			for(int i=0; i<pos.size(); i++){
				ans.push_back(pos[i]);
			}
			for(int i=0; i<neg.size(); i++){
				ans.push_back(neg[i]);
			}
			
			// for(auto u: ans) cout << u <<' ';
			// 	cout << endl;
			int ok ;
			for(int i=0; i<ans.size()-2; i++){
				
				for(int j=i+1; j<ans.size(); j++){
					
					for(int k=j+1; k<ans.size(); k++){
						ok = 0 ;
						for(int l=0; l<ans.size(); l++){
							
							if(( ans[i] + ans[j] + ans[k]) == ans[l] ){
							
								ok = 1;
								break;
							}
						}
					}
				}
			}
			if(ok) cout << "YES\n";
			else cout << "NO\n";

		}
	}
	return 0;

	// Let's see what nexT
}