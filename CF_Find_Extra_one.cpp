#include<stdio.h>

int main(){
	long long n,a,b,t;
	int st=0;
	a=0;
	b=0;
	scanf("%lld",&n);
	while(n--){
	scanf("%lld",&t);
	if(t>0)
	a++;
	else
	b++;
	
	if(a>1&&b>1){
	st=1;
	}
	
	scanf("%lld",&t);
		
	}
	
	if(st)
	printf("No");
	else
	printf("Yes");
	
	
	return 0;
}
