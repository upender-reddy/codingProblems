#include<iostream>
using namespace std;

bool findPartiion (int arr[], int n)
{
    int sum = 0;
    int i, j;
   
    for (i = 0; i < n; i++)
      sum += arr[i];
     
    if (sum%2 != 0)  
       return false;
   
   int h=sum/2;
  for(int i=0;i<4;i++){
  	for(int j=i+1;j<5;j++){
  		for(int k=j+1;k<6;k++){
  			if(arr[i]+arr[j]+arr[k]==h)
  			return true;
		  }
	  }
  }
  return false;
}     
int main(){
	int ar[7];
	for(int i=0;i<6;i++){
		cin >>ar[i];
	}
	
		if(findPartiion(ar,6))
		cout << "YES";
		else
		cout <<"NO";
	
}
