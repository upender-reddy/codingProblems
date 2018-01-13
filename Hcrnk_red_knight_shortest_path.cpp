#include<bits/stdc++.h>

using namespace std;
int ar[201][201];
//string seq[50001];
int n,sx,sy,dx,dy;
string pth;
struct point{
	int x,y,v;
	string mt;
};

bool issafe(int x,int y,int v){
	return x>=0&&y>=0&&x<n&&y<n&&ar[x][y]>v;
}

queue<point> q;
int px[]={2,2,-2,-2,0,0};

int py[]={1,-1,1,-1,-2,2};

string mv[]={"LR","LL","UR","UL","L","R"};

sbfs(){
	while(!q.empty()){
		point pt=q.front();
		//seq[pt.v]=pt.mt;
		q.pop();
		for(int i=0;i<6;i++){
			int nx=pt.x+px[i];
			int ny=pt.y+py[i];
			int val=pt.v+1;
			string tmp=pt.mt;
			if(issafe(nx,ny,val)){
				point pt;
				pt.x=nx;
				pt.y=ny;
				pt.v=val;
				pt.mt=tmp+" "+mv[i];
				ar[nx][ny]=val;
				if(nx==dx&&ny==dy)
				pth=pt.mt;
				
				q.push(pt);
			}
		}
	}
	return ar[dx][dy];
}

int main(){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ar[i][j]=INT_MAX;
		}
	}
	scanf("%d%d%d%d",&sx,&sy,&dx,&dy);
	point pt;
	pt.x=sx;
	pt.y=sy;
	pt.v=0;
	pt.mt="";
	q.push(pt);
	int stp=sbfs();
	if(stp==INT_MAX)
	printf("Impossible");
	else{
	printf("%d\n",stp);
	stp++;
	int lnth=pth.length();
	for(int i=1;i<lnth;i++)
	cout << pth[i];
	}
	return 0;
}
