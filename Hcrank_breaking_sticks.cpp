#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;
 
 long long prime(long long  int n)
 {
    long long int max = 1 ;
    while (n%2 == 0)
    {  max = 2 ;
        n = n/2;
    }
    for ( long long int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            max =  i ;
        }
       
    }
    if( n > max)
         max = n ;

    return max ;
}
 
    


long long int a[103];
long long int rec(  long long int n)
{    
    if(n <= 100)
       return a[n] ;
    long long int p =prime(n) ;
 
     return  (p*rec(n/p)) + 1 ;
}

int main() {  
    memset(a , 0 , sizeof(a) );
     long long int n;
    cin >> n;
     a[0] = 0 ;
     a[1] = 1 ; 
     a[2] = 3 ; a[3] = 4 ;
   long long  int max =0, flag = 0 , temp = 0 ;
     for(int i=4 ; i< 102 ; i++)
         {  max = 0 ; flag =0 ; temp = 0 ;
              for( int j =2 ; j < i ; j++)
                 {     
                  if( i %j == 0 )
                     {
                       temp = j* a[i/j] + 1 ;
                       flag = 1 ;
                     }
                       if( max < temp )
                        max = temp ;
                }
                 a[i] = max ;
                 if(flag == 0)
                 {
                 a[i] = i + 1 ;
                 } 
           }
    long long sum = 0 ;
    long long res ;
    for ( long long int i = 0;i < n;i++) {
         cin >> res;
        sum +=  rec(res) ;
     }
    cout << sum ;
    return 0;
}
