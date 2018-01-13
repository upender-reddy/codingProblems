#include<iostream>
#include<algorithm>
using namespace std;
int arr[200001];
int main(){
	int t,n,q,x,y;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		scanf("%d",&q);
		while(q--){
			int mx=-1,ct;
			scanf("%d%d",&x,&y);
			for(int i=x;i<=y;i++){
				ct=0;
				for(int j=0;i>=arr[j]&&j<n;j++){
					if(i%arr[j]==0)
					ct++;
				}
				if(ct>mx)
				mx=ct;
			}
			cout << mx <<endl;
		}
	}	
	return 0;
}
