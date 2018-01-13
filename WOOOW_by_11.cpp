#include<bits/stdc++.h>
using namespace std;

int main(){
	int c=0;
	int d=0;
for(int i=1;i<=9;i++){
	for(int j=1;j<=9;j++){
		if(i!=j){
			d++;
		if((i*10000+j*1000+j*100+j*10+i)%11==0){
		printf("%d%d%d%d%d\n",i,j,j,j,i);
		c++;
	}
		}
	}
}
printf("%d/%d",c,d);
return 0;
}
