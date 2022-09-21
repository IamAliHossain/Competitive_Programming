#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,md,x,y,cnt;
		string s,c;
		cin >> s >> c;
		int flag = 0;
		for(i=0; i<s.size(); i+=2){
			if(s[i]==c[0]){
				flag = 1;
			}
				
		}
		if(flag==1){
			cout << "YES\n";
		}
		else cout << "NO\n";

	}
}