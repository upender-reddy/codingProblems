#include<iostream>
using namespace std;

	int a[201],b[201];
int main(){
	int n,m,t,ot,c;
	c=0;
	cin>>n;
	cin >> t;
	ot=(t-100);
	a[100]++;
	for(int i=1;i<n;i++){
		cin >> t;
		a[t-ot]++;
	}
	
	cin>>m;
	for(int i=0;i<m;i++){
		cin >> t;
		b[t-ot]++;
	}
	
	for(int i=0;i<=200;i++){
		if(b[i]>1&&b[i]!=a[i]){
			cout <<i+ot<<" ";
		}
		
	}
	return 0;
}
