using namespace std;
#include<stdio.h>


int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
	bool vis[2000001]={false};
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);;
	int i,j,k=0;
	for(i=1;i<=1000000;i++){
		for(j=0;j<n;j++){	
			if(vis[a[j]+i])
				break;
			}
			if(j==n){
			b[k++]=i;
			for(j=0;j<n;j++){	
				vis[a[j]+i]=true;
				}
			}
			if(k==n)
			break;
		}
	
		printf("YES\n");
		for(j=0;j<n;j++)
			printf("%d ",b[j]);
		
			printf("\n");
	}
	return 0;
}
