#include<bits/stdc++.h>
using namespace std;


#define 	ll 			long long int 
#define 	FAST()		ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define 	endl 		"\n"
#define 	yes 		cout << "YES\n"
#define 	no 			cout << "NO\n"

int main()
{
	FAST();
	int t;
	cin >> t;
	while(t--){ 
		
		ll n,a,b,c,d,ans;
		cin >> n;
		if(n%4==0){
			ans = n/4;
			c=ans;
			d=ans;
			a = ans;
			b= ans;
			cout << a << " "<< b << " "<< c<< " " << d<< " " << endl;
		}
		else if(n%2==1){
			c=1;
			d=1;
			ans = n-2;
			a = ans/2;
			b= a+1;
			cout << a << " "<< b << " "<< c<< " " << d<< " " << endl;
		}
		else{
			c=1;
			d=1;
			ans = n-2;
			a = (ans/2)-1;
			b= (ans/2)+1;
			cout << a << " "<< b << " "<< c<< " " << d<< " " << endl;
		}
		
	
	}
	return 0 ;
}
