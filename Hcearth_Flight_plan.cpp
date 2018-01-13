#include <bits/stdc++.h> 
using namespace std;
 bool g[1002][1002];
 int mn[1002];
 int n,m,t,c,x,y;
 string mnpth;


struct Nd{
	int v;
	int tm;
	int nn;
	string path;
};

queue<Nd> q;


int waitTime(int ctime){
	
	if(ctime%t==0)
	return 0;
	int ft=ctime/t;
	ft++;
	return (ft*t)%ctime;
}	

int doBfs(){
	while(!q.empty()){
		Nd nd=q.front();
		q.pop();
		int cv=nd.v;
		int ct=nd.tm;
		int cnn=nd.nn;
		int wt=waitTime(ct);
		for(int i=1;i<=n;i++){
			if(g[cv][i]&&mn[i]>(cnn+1)){
				
				mn[i]=cnn+1;
				Nd cnd;
				cnd.v=i;
				cnd.nn=mn[i];
				cnd.path=nd.path+" "+to_string(i);
				if(i==y)
				mnpth=cnd.path;
				q.push(cnd);
			}
		}
	}
	return mn[y];
}

int main()
{
	int a,b;
	
    cin >> n>> m>>t>>c;
    
    for(int i=0;i<m;i++){
    	cin >>a>>b;
		g[a][b]=true;
		g[b][a]=true;	
	}
	
	for(int i=0;i<=n;i++)
	mn[i]=INT_MAX;
	
	cin>>x>>y;
	mn[x]=0;
	
	Nd src;
	src.v=x;
	src.tm=0;
	src.nn=1;
	src.path=""+x;
	q.push(src);

	
	int ans=doBfs();
		
	for(int i=1;i<=n;i++)
	cout << mn[i]<<" ";
	//cout << ans;
	return 0;
}
