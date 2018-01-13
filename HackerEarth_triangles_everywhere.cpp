#include<iostream>

using namespace std;
long long a[1000001];
int main(){
	a[1]=5;
	int p=1;
	int n,q;
	
	cin >> q ;
	
	while(q--){
		cin >> n;
		if(n>p){
			for(int i=p+1;i<=n;i++){
				a[i]=((a[i-1]*3)%1000000007+2)%1000000007;
			}
			p=n;
		}
		cout <<a[n]<<endl;
	}
}
