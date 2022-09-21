#include<bits/stdc++.h>
using namespace std;


#define ll 		long long int 
#define FAST 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl 	"\n"
#define yes 	cout << "YES\n"
#define no 		cout << "NO\n"
#define vin 	vector<ll>
#define vst 	vector<string>
#define pb		push_back



int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){

		string s;
		cin >> s;
		
		ll len =s.size();
	
			ll a=0;
			ll b=0;
			for(int i=0; i<len; i++){ 
				
					if(s[i]=='A') a++;
					else b++;

				}
			if(a==0 || b==0 || s[0]=='B' || s[len-1]=='A')no;
			else{
				ll A=0;

				ll temp=0;
				for(int i=0; i<len; i++){ 
				
					if(s[i]=='A') A++;
					else A--;
					
					if(A<0) {
						temp=1;
						break;
					}

				}
			
				if(temp)no;
				else yes;
			}
				
//
	}	
	return 0 ;
}
