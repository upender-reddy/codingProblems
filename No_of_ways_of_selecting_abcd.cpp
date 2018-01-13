#include<iostream>

using namespace std;
int n,m,c;
char pe[]={'a','b','c','d'};
	char a[21][21];
	
bool issafe(int a,int b){
	return a>=0&&b>=0&&a<n&&b<m;
}

void compute(int i,int j,int p){
	
	if(p==3){
		if(issafe(i,j)&&a[i][j]=='d')
		c++;
		return;
	}
	if(issafe(i,j)&&a[i][j]==pe[p]){
		compute(i+1,j,p+1);
		compute(i,j+1,p+1);
		compute(i-1,j,p+1);
		compute(i,j-1,p+1);
	}
}

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	 c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(a[i][j]=='a'){
			compute(i,j,0);
		}
		}
	}
	cout << c;
	return 0;
}
