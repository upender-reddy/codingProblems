#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin >> n >>q;
	string str;
	cin >> str;
	int l[n+1];
	int r[n+2];
	int max=0;
	l[0]=0;
	for(int i=1;i<=n;i++){
		if(str[i-1]=='1'){
			l[i]=l[i-1]+1;
		}
		else
		l[i]=0;
		
		if(max<l[i])
		max=l[i];
	}
	
	
	for(int i=0;i<q;i++){
		int a,b;
		cin >>a;
		if(a==2){
			cin >> b;
			if(l[b]==0){
				l[b]=l[b-1]+1;
				b++;
					while(b<=n&&l[b]>0){
						l[b]=l[b-1]+1;
						b++;
					}
					if(b>n)
						b--;
						
						if(b>1&&l[b-1]>max)
						max=l[b-1];
											
					if(l[b]>max)
					max=l[b];
					
					if(b<n&&l[b+1]>max)
					max=l[b+1];
				}
		
		}
		else
		cout <<max<<endl;
}
	return 0;	
}
