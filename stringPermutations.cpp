#include<stdio.h>
#include <string.h>

void swap(char *a,char *b){
	char t=*a;
	*a=*b;
	*b=t;
	
}

void permute(char* a,int l,int r){
	if(l==r)
	printf("%s\n",a);
	else{
	
	for(int i=l;i<=r;i++){
		swap(&a[l],&a[i]);
		permute(a,l+1,r);
		swap(a+l,a+i);
	}
}
}



int main(){
	char str[]="abcd";
	permute(str,0,strlen(str)-1);
	return 0;
}


