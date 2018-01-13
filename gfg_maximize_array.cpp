#include <bits/stdc++.h>
using namespace std;


bool lsearch(int ar[],int l,int s){
	for(int i=0;i<l;i++)
	if(s==ar[i])
	return true;
	return false;
}
int main() {
	//code
	int t,n;
	scanf("%d",&t);
	bool f[10];
	while(t--){
		scanf("%d",&n);
		
		for(int i=0;i<10;i++)
		f[i]=true;
		
		int  ct=0;
		int ar[2*n],cp[2*n];
		int j=0;
		for(int i=n;i<2*n;i++){
		    scanf("%d",&ar[i]);
		    if(f[ar[i]]){
			
		    cp[j]=ar[i];
		    j++;
		    f[ar[i]]=false;
		}
		    
		}
		for(int i=0;i<n;i++){
		    scanf("%d",&ar[i]);
		    if(f[ar[i]]){
		    	cp[j]=ar[i];
		    	j++;
		    	f[ar[i]]=false;
			}
		}
		
			for(int i=0;i<10;i++)
		f[i]=true;
		
		sort(cp,cp+j,greater<int>());
		
//	for(int i=0;i<2*n;i++){
//		printf("%d  ",cp[i]);
//	}

		for(int i=0;i<2*n;i++){
		if(f[ar[i]]&&lsearch(cp, n, ar[i])){
		        printf("%d ",ar[i]);
		        f[ar[i]]=false;
		        ct++;
		        if(ct==n)
		            break;
		    }
	    }
	    	printf("\n");
	}
	return 0;
}
