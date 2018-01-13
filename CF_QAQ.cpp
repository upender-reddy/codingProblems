#include<iostream>
using namespace std;

int mabs(int a){
	if(a<0)
	a=-a;
	return a;
}

int main(){
	char str[101];
	cin >> str;
	int ct=0,i=0,cq=0,ca=0;
	while(str[i]!='\0'){
		if(str[i]=='Q')
		cq++;
		else if(str[i]=='A');
		ca++;
		
		if(str[i]=='Q'&&ca>=1&&cq>=1){
			ct+=ca+mabs(ca,cq);
		}
		i++;
	}
	cout << ct;
	return 0;
}
