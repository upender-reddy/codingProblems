#include <stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	long long dp[2][4];
	dp[0][0]=1;
	dp[0][1]=1;
	dp[0][2]=1;
	dp[0][3]=0;
	int flip=0;
for(int i=1;i<n;i++){
		dp[1-flip][0]=(dp[flip][1]+dp[flip][2]+dp[flip][3])%1000000007;
		dp[1-flip][1]=(dp[flip][0]+dp[flip][2]+dp[flip][3])%1000000007;
		dp[1-flip][2]=(dp[flip][0]+dp[flip][1]+dp[flip][3])%1000000007;
		dp[1-flip][3]=(dp[flip][0]+dp[flip][1]+dp[flip][2])%1000000007;
		flip=1-flip;

}
	printf("%lld",dp[(n+1)%2][3]);
	
}
