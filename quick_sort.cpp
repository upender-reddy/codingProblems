#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int *ar,int l,int h)
{
	int p=ar[h];
	int i=l-1;
	
	for(int j=l;j<=h-1;j++){
		if(ar[j]<=p){
			i++;
			swap(&ar[i],&ar[j]);	
		}
	}
	i++;
	swap(&ar[i],&ar[h]);
	return i;
}

void quickSort(int *ar,int l,int h){
	if(l<h){
		int p=partition(ar,l,h);
		quickSort(ar,l,p-1);
		quickSort(ar,p+1,h);
	}
}

print(int *ar,int n){
	for(int i=0;i<n;i++)
	printf("%d ",ar[i]);
}

int main(){
	int n;
	cin >> n;
	int *ar=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	scanf("%d",&ar[i]);
	
	quickSort(ar,0,n-1);
	print(ar,n);
}
