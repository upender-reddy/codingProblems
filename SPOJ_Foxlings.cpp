#include<stdio.h>
#include<stdbool.h>
#include<iostream>
using namespace std;
int main(){
	long union1[10001];
	bool vis[10001];
		long a,b,n,m,minCrackers;
		cin >> n >> m;
		for(int i=0;i<m;i++){
		scanf("%ld%ld",&a,&b);
			if(union1[a]==0&&union1[b]==0){
				union1[a]=a;
				union1[b]=a;
			}
			else if(union1[a]==0){
				union1[a]=union1[b];
			}
			else {
				union1[b]=union1[a];
			}
		}
		
		
		for(int i=1;i<=n;i++){
			if(!vis[union1[i]]||union1[i]==0){
				minCrackers++;
				vis[union1[i]]=true;
			}
		}
		printf("%d",minCrackers);
	
	return 0;
}
