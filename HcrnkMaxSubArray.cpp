#include<stdio.h>
#include<iostream>
using namespace std;
int arr[100001];

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int nmx,cmx,val,mxs;
		scanf("%d",&n);
			scanf("%d",&val);
			mxs=nmx=cmx=val;
		for(int i=1;i<n;i++){
				scanf("%d",&val);
				if(nmx+val>nmx)
				nmx+=val;
				if(val>nmx)
				nmx=val;
			mxs+=val;
			if(mxs<0)
			mxs=0;
			if(cmx<mxs)
			cmx=mxs;	
		}
		if(nmx<0)
		cmx=nmx;
		cout <<cmx<< nmx;	
	}
	return 0;
}
