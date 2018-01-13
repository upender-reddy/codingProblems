#include<stdio.h>

int main(){
int n,t;
scanf("%d",&n);
bool f=true;
int p1=1,p2=2,l=3;
while(n--)	{
	
scanf("%d",&t);
if(f){
	if(t==p1){
	p1=l;
	l=p2;
	p2=t;
	}
	else if(t==p2){
		p2=l;
		l=p1;
		p1=t;
	}
	else{
	
	f=false;
	}
}
}
if(f)
printf("YES");
else
printf("NO");

}
