#include<iostream>
using namespace std;
int main(){
	char s[100];
	int n,ftos=0,stof=0;
	cin >> n;
	cin >> s;
	for(int i=1;i<n;i++){
		if(s[i]=='F'&&s[i-1]=='S')
		stof++;
		else if(s[i]=='S'&&s[i-1]=='F')
		ftos++;
	}
	if(stof>ftos)
	cout << "YES";
	else
	cout << "NO";
	
}
