#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t,n;
	cin >> t;
	while(t--){
		scanf("%d",&n);
		long long mn,c[n],m[n];
		long long mnc;
		for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
		}
		
		
		for(int i=0;i<n;i++){
		scanf("%d",&m[i]);
		}
		
		mn=c[0];
		mnc=mn*m[0];
		
		for(int i=1;i<n;i++){
			if(c[i]<mn)
			mn=c[i];
			
			mnc+=mn*m[i];
		}
		
		cout << mnc<<endl;
		
	}
	return 0;
}
