#include<iostream>
using namespace std;
int mx(int a,int b){
	return a>b?a:b;
}


int a[10];
bool v[3][10];
int main (){
int n,t;
cin >> n;
int ans=0,j,val;

for(int i=0;i<10;i++)
a[i]=0;

for(int i=0;i<n*6;i++)
{
		cin >> t;
		a[t]++;
}


	for(int i=1;i<10;i++){
		if(a[i]>0){
			ans++;
			a[i]--;
		}
		else
		break;
	}
	
	if(ans==9&&a[0]>0){
		ans=10;
			for(int i=1;i<10;i++){
				if(a[i]>0){
					ans+=11;
				}
				else
				break;
			}
		
	}
	cout << ans;


}

