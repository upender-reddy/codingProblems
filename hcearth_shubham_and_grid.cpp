#include<iostream>

using namespace std;
int n,m;
bool issafe(int a,int b){
	return a>=0&&b>=0&&a<n&&b<m;
}

int main(){
	cin >> n >> m;
	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x,y;
			bool f=false;
			if(a[i][j]=='a'){
				if(issafe(i,j+1)&&a[i][j+1]=='b')
				{
					x=i;
					y=j+1;
					f=true;
				}
				else if(issafe(i,j-1)&&a[i][j-1]=='b')	{
					x=i;
					y=j-1;
					f=true;
				}	
				else if(issafe(i-1,j)&&a[i-1][j]=='b')	{
					x=i-1;
					y=j;
					f=true;
				}
				else if(issafe(i+1,j)&&a[i+1][j]=='b')	{
					x=i+1;
					y=j;
					f=true;
				}
				
				if(f){
					f=false;
				if(issafe(x,y+1)&&a[x][y+1]=='c')
				{
					x=x;
					y=y+1;
					f=true;
				}
				else if(issafe(x,y-1)&&a[x][y-1]=='c')	{
					x=x;
					y=y-1;
					f=true;
				}	
				else if(issafe(x-1,y)&&a[x-1][y]=='c')	{
					x=x-1;
					y=y;
					f=true;
				}
				else if(issafe(x+1,y)&&a[x+1][y]=='c')	{
					x=x+1;
					y=y;
					f=true;
					}
					
					if(f){
						if(issafe(x,y+1)&&a[x][y+1]=='d')
						{
							c++;
						}
					else if(issafe(x,y-1)&&a[x][y-1]=='d')	{
						c++;
						}	
					else if(issafe(x-1,y)&&a[x-1][y]=='d')	{
						c++;
					}
					else if(issafe(x+1,y)&&a[x+1][y]=='d')	{
						c++;
					}
					}
				}
			}
		}
	}
	cout << c;
	return 0;
}
