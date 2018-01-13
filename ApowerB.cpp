#include <iostream>
using namespace std;

long long aPowerb(int a,int b){
	if(b==0)
	return 1;
	if(b%2==0)
	return aPowerb(a,b/2)*aPowerb(a,b/2);
	return a*aPowerb(a,b/2)*aPowerb(a,b/2);	
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << aPowerb(a,b);
	return 0;
}
