#include<iostream>
using namespace std;
int toy[101][101];
int h,w,tp;

int absV(int a){
	if(a<0)
	a=-a;
	
	return a;
}

int main(){
	
	cin >> h>>w;
	tp=h*w*2;
	for(int i=0;i<h;i++){
		int p=0;
		for(int j=0;j<w;j++){
			cin >> toy[i][j];
			tp+=absV(p-toy[i][j]);
			p=toy[i][j];
		}
		
		tp+=p;
	}
	
		for(int i=0;i<w;i++){
			int p=0;
		for(int j=0;j<h;j++){
			tp+=absV(p-toy[j][i]);
			p=toy[j][i];
		}
		tp+=p;
	}
	
	cout << tp;
	
	return 0;
}
