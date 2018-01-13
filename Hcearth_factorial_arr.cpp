#include<bits/stdc++.h>
#define z5 100001
#define z9 1000000007
#define M  10000000
using namespace std;
unsigned long long num;
unsigned long int f[M];
unsigned long long a[z5];

void facto(){
	f[1]=1;
	for(int i=2;i<=M;i++)
	f[i]=(i*f[i-1])%z9;
}

long int getFacto(long long n){
	long int ft;
	for(long long i=M+1;i<=n;i++)
	ft=(i*f[i-1])%z9;
	
	return ft;
}

int main(){
	facto();
	long int n,m,t,l,r,min=INT_MAX,max=INT_MIN;
	scanf("%ld%ld",&n,&m);
	
	for(int i=1;i<=n;i++)
	scanf("%ulld",&a[i]);
	
	for(int i=0;i<m;i++){
		scanf("%ld%ld%ld",&t,&l,&r);
		long long sm=0;
		switch(t){
			case 1: a[l]++;
					if(r!=n){
						r++;
						a[r]--;
						if(r>max)
							r=max;
					}
			
					if(l<min)
						l=min;
					break;
					
			case 2: 
			if(min!=INT_MAX||max!=INT_MIN)
			for(int i=min+1;i<=max;i++)
					 	a[i]+=a[i-1];
					for(int i=l;i<=r;i++){
						if(a[i]<=M)
						sm=(sm+f[a[i]])%z9;
						else
						sm=(sm+getFacto(a[i]))%z9;
					}
					printf("%lld",sm);
					min=INT_MAX;
					max=INT_MIN;
					break;
			case 3: a[l]+=r;
					break;
							
		}
	}
	
	return 0;
}
