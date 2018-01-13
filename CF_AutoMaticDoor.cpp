#include <iostream>
using namespace std;


inline unsigned long long mn(unsigned long long a,unsigned long long b){
	return a<b?a:b;
}

int main() {
	int n,m,k,a,j;
	unsigned long long d,nts,prev,c,et,mnv;
	cin >>n>>m >>a >> d;
	unsigned long long clnts[m];
	nts=1;
	k=1;
	j=0;
	
	for(int i=0;i<m;i++){
			scanf("%llu",&clnts[i]);
			//cin >> clnts[i];
			//cout << clnts[i] <<" " ;
		
	}
	et=k*a;
	mnv=mn(et,clnts[j]);
	if(mnv==et)
	k++;
	else
	j++;
	prev=mnv;
	
	for(;j<m&&k<=n;)
	{
		et=k*a;
		mnv=mn(et,clnts[j]);
		if(mnv-prev>d){
		prev=mnv;
		nts++;
	}
		if(mnv==et)
		k++;
		else
		j++;
		
	}
	
	if(j<m){
		for(int i=j;i<m;i++){
			if(clnts[i]-prev>d){
			
			nts++;
			
			prev=clnts[i];
		}
			//cout << ar[ii]<<" ";
		}
		
	}
	
	else if(k<=n){
		
		
		if(k<=n){
		
		if((d-prev)<(k*a)){
			nts+=n-k;
		}
		else{
			int tmp=d/a;
			nts+=n-tmp;
		}
	}
//		for(int i=k;i<=n;i++){
//			et=i*a;
//			if(et-prev>d){
//			
//			nts++;
//			prev=et;
//			}
//		}
	
}
	
	cout << nts;
return 0;
}
