#include<stdio.h>
#include<stdbool.h>
#include<iostream>
using namespace std;

int main(){
	int ts;
	cin>>ts;
	while(ts>0){
		ts--;
		int i,n,k,top,val;
	i=0;
	top=-1;
	
	bool f=false;
	cin >> n >> k;
	int stack[n+1];
	cin >> stack[0];
	top++;
	while(n>1){
		cin >> val;
		
		if(val>stack[top]&&k>0){
		
		while(top>=0&&val>stack[top]&&k>0){	
			f=true;
			k--;
			stack[top]=val;
			top--;
		}
		top++;
		}
		else{
			top++;
			stack[top]=val;
		}
		n--;
	}
	if(!f&&k>0){
		top--;
	}
	for(int j=0;j<=top;j++){
		printf("%d ",stack[j]);
	}
	printf("\n");
}
return 0;
}
