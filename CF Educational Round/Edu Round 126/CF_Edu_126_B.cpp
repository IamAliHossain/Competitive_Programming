#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int x, mod,cnt,val,ans;
		
		cin >> x ;
		mod = 32768 ;
		ans = 15 ;
		cnt = 0;
		for(int i= 0; i<=15 ; i++){
			cnt = i ;
			val =( x + i ) % mod ;
			while(val!=0) val*=2, val %= mod, cnt++;
			ans = min(ans, cnt);
		}
		cout << ans << " ";
	}
	cout << '\n';
	return 0;
}
