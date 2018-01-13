#include <stdio.h>
#include <string.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int *parent;
int n;
int stoi(string s){
	int val,x=0;
	for(int i=0;i<s.length();i++){
		val=x+(s.at(i)-'0');
		x=val*10;
	}
	return val;
}

int findRoot(int i){
	if(parent[i]==-1)
	return i;
	return parent[i]=findRoot(parent[i]);
}
 
void printParentArray(){
	for(int i=1;i<=n;i++){
		cout << i<<"->"<<parent[i]<<endl;
	}
	cout <<"-----------------------"<< endl;
}

void union1(int a,int b){
	int x,y;
	x=findRoot(a);
	y=findRoot(b);
	if(x!=y){
	if(x==a)
	parent[x]=y;
	else
	parent[y]=x;
	}	
	//printParentArray();
		
}

int main ()
{
  int edges;  
  cin >> n;
  parent=new int[n+1];
  for(int i=0;i<=n;i++)
  parent[i]=-1;
  
  cin  >> edges;
  cin.ignore(999,'\n');	
  for(int i=0;i<edges;i++){
		string str;
		getline(cin,str);
		int ii=0;
		while(ii<str.length()&&str.at(ii)!=' '){
			ii++;
		}
		
		int a=stoi(str.substr(0,ii));
		int b=stoi(str.substr(ii+1));
		union1(a,b);
		//cout << a<<endl<<b <<endl;
	}
	
	printParentArray();
  return 0;
}
