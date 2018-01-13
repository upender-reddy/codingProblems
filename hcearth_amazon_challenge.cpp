#include <iostream>
using namespace std;

struct ct{
	int v,id;
};

inline int mn(int a,int b){
	return a<b?a:b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,minAmt=999999999;
		ct m1,m2,m3;
		m1.v=999999999;
		m2.v=999999999;
		cin >>n;
		int cost[n][3];
		dp[1][3];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				cin >> cost[i][j];
			}
		}
		if(n==1){
			cout << mn(cost[0][1],mn(cost[0][0],cost[0][2]))<<endl;
		}
		
		if(n==2){
			cout << mn(cost[1][1]+mn(cost[0][0],cost[0][2])
			,mn( cost[1][0]+mn(cost[0][1],cost[0][2])  ,  cost[1][2]+mn(cost[0][1],cost[0][0])  ))<<endl;
		}
		
		else{
					
		}
		
	
	return 0;
}
