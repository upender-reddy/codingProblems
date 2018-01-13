#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char s[100001];
	scanf("%s",s);
	int q,n,k,t,sm;
	k=strlen(s);
	t=k;
	scanf("%d",&q);
	while(q--){	
	scanf("%d",&n);
	sm=0;
	t=k;
	int i=0;
	while(sm<n&&t>0){
		sm+=t;
		t--;
		i++;
	}
	
	int z=k-(sm-n);
	if(t<=0&&sm<n)
	printf("-1");
	else
	for(int j=i-1;j<z;j++){
		printf("%c",s[j]);
	}	
	
	printf("\n");
	}
	return 0;
}
